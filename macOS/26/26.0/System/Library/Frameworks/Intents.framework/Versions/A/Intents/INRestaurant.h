@class NSString, CLLocation;

@interface INRestaurant : NSObject <INRestaurantExport, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) CLLocation *location;
@property (copy) NSString *name;
@property (copy) NSString *vendorIdentifier;
@property (copy) NSString *restaurantIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)descriptionAtIndent:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)_dictionaryRepresentation;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithLocation:(id)a0 name:(id)a1 vendorIdentifier:(id)a2 restaurantIdentifier:(id)a3;
- (BOOL)location:(id)a0 equalToLocation:(id)a1;

@end
