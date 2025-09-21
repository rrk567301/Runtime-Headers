@class NSString, LNStaticDeferredLocalizedString, NSArray;

@interface LNQueryParameterMetadata : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *propertyIdentifier;
@property (readonly, copy, nonatomic) LNStaticDeferredLocalizedString *localizedTitle;
@property (readonly, copy, nonatomic) NSArray *comparators;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPropertyIdentifier:(id)a0 localizedTitle:(id)a1 comparators:(id)a2;
- (id)initWithPropertyIdentifier:(id)a0 title:(id)a1 comparators:(id)a2;

@end
