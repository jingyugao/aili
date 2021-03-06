# aili

[![Author](https://img.shields.io/badge/Author-UncP-brightgreen.svg)](https://github.com/UncP)
[![Version](https://img.shields.io/badge/Version-1.3.1-blue.svg)](https://github.com/UncP/aili)

#### References
* Palm Tree : [Parallel Architecture-Friendly Latch-Free Modifications to B+ Trees on Many-Core Processors](http://www.vldb.org/pvldb/vol4/p795-sewall.pdf)
* Mass Tree : [Cache Craftiness for Fast Multicore Key-Value Storage](https://pdos.csail.mit.edu/papers/masstree:eurosys12.pdf)
* B<sup>link</sup> Tree : [Efficient Locking for Concurrent Operations on B-Trees](https://www.csd.uoc.gr/~hy460/pdf/p650-lehman.pdf)
* Prefetch B+ Tree : [Improving Index Performance through Prefetching](http://www.aladdin.cs.cmu.edu/papers/pdfs/y2001/improv_ind.pdf)
* Prefix B Tree : [Prefix B-Trees](http://delivery.acm.org/10.1145/330000/320530/p11-bayer.pdf?ip=111.114.49.2&id=320530&acc=ACTIVE%20SERVICE&key=BF85BBA5741FDC6E%2E4510866D46BF76B7%2E4D4702B0C3E38B35%2E4D4702B0C3E38B35&__acm__=1537792786_42d3c27bf4ea064b8d68b89657e39bf6)

#### Version Information
| Version |           Detail             |
|:------:|:---------------------------:|
| [1.0.0](https://github.com/UncP/aili/tree/1.0.0)  | Palm Tree |
| [1.1.0](https://github.com/UncP/aili/tree/1.1.0)  | Palm Tree with point-to-point synchronization |
| [1.2.0](https://github.com/UncP/aili/tree/1.2.0)  | Simple Prefix Palm Tree |
| [1.2.1](https://github.com/UncP/aili/tree/1.2.1)  | synchronization optimization & remove barrier |
| [1.2.2](https://github.com/UncP/aili/tree/1.2.2)  | adjust Palm Tree descending policy (level descend, not ideal) & sequential insertion optimization |
| [1.2.3](https://github.com/UncP/aili/tree/1.2.3)  | adjust Palm Tree descending policy (lazy descend, great for sequential operation) |
| [1.3.0](https://github.com/UncP/aili/tree/1.3.0)  | a major refactor |
| [1.3.1](https://github.com/UncP/aili/tree/1.3.1)  | Prefetch Palm Tree |


#### Have a Try
```bash
1. make third_party
                                       #  key_num   key_len
2. make generate_data && ./generate_data  10000000    10    # test data will be in ./data
                                        #  f_name  n_size  b_size  t_num  q_num  k_num
3. make palm_tree_test && ./palm_tree_test   1      4096    16384     2      8   1000000

# f_name can be 0 (sequential data) or 1 (random data);
# if your machine supports N threads, t_num can be 1, 2, ..., (N-1), not N;
# k_num can be [1, infinity), depending on how many test keys you generate
```


#### Other
+ checkout `example/` to get use example
+ follow my [知乎专栏](https://zhuanlan.zhihu.com/b-tree) for blog about this repo
