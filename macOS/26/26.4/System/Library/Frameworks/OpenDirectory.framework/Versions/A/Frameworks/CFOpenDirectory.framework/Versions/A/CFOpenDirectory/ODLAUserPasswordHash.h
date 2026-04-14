@class LAUserPasswordHash;

@interface ODLAUserPasswordHash : NSObject {
    LAUserPasswordHash *_underlying;
}

- (void)dealloc;
- (id)initWithPBKDF2HashData:(id)a0 iterations:(long long)a1 salt:(id)a2;

@end
