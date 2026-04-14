@class NSLocale;

@interface _LTLocalePair : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSLocale *sourceLocale;
@property (readonly, nonatomic) NSLocale *targetLocale;

+ (id)pairNamesForLocaleIdentifiers:(id)a0;
+ (id)pairNamesForLocales:(id)a0;
+ (id)pairWithIdentifiers:(id)a0;

- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)canonicalIdentifier;
- (id)initWithCoder:(id)a0;
- (id)identifier;
- (BOOL)isPassthrough;
- (id)initWithSourceLocale:(id)a0 targetLocale:(id)a1;
- (BOOL)isVariantPair;
- (id)canonicalLocalePair;
- (id)combinedLocaleIdentifier;
- (id)initWithSourceIdentifier:(id)a0 targetIdentifier:(id)a1;
- (BOOL)isBidirectionalEqual:(id)a0;
- (id)oppositeToLocale:(id)a0;
- (id)reversedPair;

@end
