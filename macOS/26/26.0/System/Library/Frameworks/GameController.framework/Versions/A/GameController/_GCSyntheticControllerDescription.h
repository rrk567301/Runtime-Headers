@class NSString;
@protocol NSCopying, NSSecureCoding, NSObject;

@interface _GCSyntheticControllerDescription : NSObject

@property (readonly) id<NSCopying, NSObject, NSSecureCoding> controllerIdentifier;
@property (readonly) NSString *persistentIdentifier;

- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (BOOL)isEqualToDescription:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithControllerIdentifier:(id)a0 persistentIdentifier:(id)a1;

@end
