@class NSData;

@interface MKWalletMerchantStylingInfo : NSObject <NSSecureCoding> {
    NSData *_styleAttributesData;
}

@property (class, readonly) char supportsSecureCoding;

- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)imageForSize:(unsigned long long)a0 scale:(double)a1;
- (id)initWithStyleAttributes:(id)a0;
- (id)imageForSize:(unsigned long long)a0 scale:(double)a1 transparent:(char)a2;
- (id)_featureStyleAttributes;
- (id)tintColorForScale:(double)a0;

@end
