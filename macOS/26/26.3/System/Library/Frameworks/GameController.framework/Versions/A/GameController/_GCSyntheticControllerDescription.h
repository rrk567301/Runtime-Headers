@class NSString;
@protocol NSCopying, NSSecureCoding, NSObject;

@interface _GCSyntheticControllerDescription : NSObject

@property (readonly) id<NSCopying, NSObject, NSSecureCoding> controllerIdentifier;
@property (readonly) NSString *persistentIdentifier;

- (id)debugDescription;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToDescription:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithControllerIdentifier:(id)a0 persistentIdentifier:(id)a1;

@end
