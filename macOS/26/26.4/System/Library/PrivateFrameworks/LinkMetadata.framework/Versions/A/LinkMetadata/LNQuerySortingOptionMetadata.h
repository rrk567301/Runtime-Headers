@class NSString, LNStaticDeferredLocalizedString;

@interface LNQuerySortingOptionMetadata : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) LNStaticDeferredLocalizedString *title;
@property (readonly, copy, nonatomic) NSString *propertyIdentifier;
@property (readonly, copy, nonatomic) NSString *entityType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithPropertyIdentifier:(id)a0 entityType:(id)a1;
- (id)initWithTitle:(id)a0 propertyIdentifier:(id)a1 entityType:(id)a2;

@end
