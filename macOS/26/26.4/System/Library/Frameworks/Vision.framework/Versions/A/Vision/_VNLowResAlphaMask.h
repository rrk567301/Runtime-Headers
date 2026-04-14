@class NSArray;

@interface _VNLowResAlphaMask : NSObject <NSCopying, NSSecureCoding> {
    NSArray *_instanceLowResMaskArray;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) BOOL isSingleMask;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (struct __CVBuffer { } *)_alphaMaskAtIndex:(unsigned long long)a0;
- (id)initWithAlphaMaskArray:(id)a0;
- (id)initWithSingleAlphaMask:(struct __CVBuffer { } *)a0;

@end
