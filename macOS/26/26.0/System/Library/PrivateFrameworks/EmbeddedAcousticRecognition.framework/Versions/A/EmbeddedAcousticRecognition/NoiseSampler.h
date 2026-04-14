@interface NoiseSampler : NSObject {
    struct vector<unsigned long, std::allocator<unsigned long>> { unsigned long long *__begin_; unsigned long long *__end_; unsigned long long *__cap_; } _alias;
    struct vector<float, std::allocator<float>> { float *__begin_; float *__end_; float *__cap_; } _unigram;
    struct mersenne_twister_engine<unsigned int, 32UL, 624UL, 397UL, 31UL, 2567483615U, 11UL, 4294967295U, 7UL, 2636928640U, 15UL, 4022730752U, 18UL, 1812433253U> { unsigned int __x_[624]; unsigned long long __i_; } _generator;
}

- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned long long)drawNoise;
- (id)initWithUnigram:(float *)a0 ofSize:(unsigned long long)a1;
- (id)initWithZipfOfSize:(unsigned long long)a0;

@end
