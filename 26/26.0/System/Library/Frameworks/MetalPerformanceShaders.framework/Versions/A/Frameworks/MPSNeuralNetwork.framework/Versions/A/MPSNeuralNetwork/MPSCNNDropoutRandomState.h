@class MPSParallelRandomMTGP32State;

@interface MPSCNNDropoutRandomState : NSObject <NSCopying, NSSecureCoding> {
    MPSParallelRandomMTGP32State *_rngState;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSeed:(unsigned long long)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
