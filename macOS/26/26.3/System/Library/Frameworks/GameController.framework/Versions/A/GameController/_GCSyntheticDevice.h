@class NSString;
@protocol NSCopying, NSSecureCoding, NSObject;

@interface _GCSyntheticDevice : NSObject {
    unsigned int _serviceIdentity;
    NSString *_identifier;
    id<NSCopying, NSObject, NSSecureCoding> _controllerIdentifier;
    NSString *_persistentIdentifier;
}

+ (id)devicePropertiesWithDescription:(id)a0;

- (id)debugDescription;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
