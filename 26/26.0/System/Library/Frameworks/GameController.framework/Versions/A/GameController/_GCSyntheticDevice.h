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
- (void)dealloc;
- (id)init;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
