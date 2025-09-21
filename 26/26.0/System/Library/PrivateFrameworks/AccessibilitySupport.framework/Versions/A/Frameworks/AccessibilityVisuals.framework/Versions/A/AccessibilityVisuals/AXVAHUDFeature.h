@class NSString;

@interface AXVAHUDFeature : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *symbolName;
@property (readonly, copy, nonatomic) NSString *localizedName;

+ (id)stringToShowForFeature:(id)a0 enabled:(BOOL)a1;
+ (id)stringToShowForFeatures:(id)a0 enabled:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 symbolName:(id)a1 localizedName:(id)a2;
- (BOOL)isEqualToFeature:(id)a0;

@end
