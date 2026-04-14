@class NSString;
@protocol NSCopying, NSSecureCoding, NSObject;

@interface _GCSyntheticControllerDescription : NSObject

@property (readonly) id<NSCopying, NSObject, NSSecureCoding> controllerIdentifier;
@property (readonly) NSString *persistentIdentifier;

- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (BOOL)isEqualToDescription:(id)a0;
- (id)initWithControllerIdentifier:(id)a0 persistentIdentifier:(id)a1;

@end
