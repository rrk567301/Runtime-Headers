@class NSString, NSData, NSArray;

@interface IDSRegisteredDevice : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *hardwareVersion;
@property (readonly, nonatomic) NSData *pushToken;
@property (readonly, nonatomic) NSArray *URIs;
@property (readonly, nonatomic) NSArray *linkedURIs;
@property (readonly, nonatomic) NSData *publicDeviceIdentity;

+ (id)registeredDeviceFromDependentRegistrationDictionary:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithName:(id)a0 hardwareVersion:(id)a1 pushToken:(id)a2 URIs:(id)a3 linkedURIs:(id)a4 publicDeviceIdentity:(id)a5;
- (BOOL)isEqualToRegisteredDevice:(id)a0;

@end
