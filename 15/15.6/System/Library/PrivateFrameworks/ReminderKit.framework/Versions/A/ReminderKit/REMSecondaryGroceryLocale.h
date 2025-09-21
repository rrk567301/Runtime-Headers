@class NSLocale;

@interface REMSecondaryGroceryLocale : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSLocale *locale;
@property (readonly, nonatomic) char isAutomatic;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithLocale:(id)a0 isAutomatic:(char)a1;

@end
