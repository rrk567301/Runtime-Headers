@class NSLocale;

@interface _LTLocalePair : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSLocale *sourceLocale;
@property (readonly, nonatomic) NSLocale *targetLocale;

+ (id)pairWithIdentifiers:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)identifier;
- (id)reversedPair;
- (id)cannonicalLocalePair;
- (id)oppositeToLocale:(id)a0;
- (id)initWithSourceLocale:(id)a0 targetLocale:(id)a1;
- (id)cannonicalIdentifier;
- (BOOL)isPassthrough;
- (id)combinedLocaleIdentifier;
- (BOOL)isVariantPair;
- (id)schemaPair;

@end
