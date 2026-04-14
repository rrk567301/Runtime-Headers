@class NSString;

@interface DADeviceAccessoryServiceInfo : NSObject <CUXPCCodable, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long authorizationLevel;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *associatedBundleID;
@property (readonly, copy, nonatomic) NSString *associatedDeviceID;

- (void)encodeWithXPCObject:(id)a0;
- (id)initWithXPCObject:(id)a0 error:(id *)a1;
- (unsigned long long)hash;
- (id)descriptionWithLevel:(int)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)persistentDictionaryRepresentation;
- (id)initWithName:(id)a0 authorizationLevel:(unsigned long long)a1 bundleID:(id)a2 deviceID:(id)a3;
- (id)initWithPersistentDictionaryRepresentation:(id)a0 deviceID:(id)a1 error:(id *)a2;

@end
