@class NSString, NSUnitConverter;

@interface NSDimension : NSUnit <NSSecureCoding>

@property (class, nonatomic, readonly) char supportsRegionalPreference;
@property (class, readonly) NSString *icuType;
@property (class, readonly) char supportsSecureCoding;

@property (readonly) unsigned long long specifier;
@property (readonly) NSString *icuSubtype;
@property (readonly, copy) NSUnitConverter *converter;

+ (id)_measurementWithNaturalScale:(id)a0 system:(unsigned long long)a1;
+ (id)baseUnit;

- (void)dealloc;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dimension;
- (id)initWithDimension:(id)a0;
- (id)initWithSpecifier:(unsigned long long)a0 symbol:(id)a1 converter:(id)a2;
- (id)initWithSymbol:(id)a0 converter:(id)a1;

@end
