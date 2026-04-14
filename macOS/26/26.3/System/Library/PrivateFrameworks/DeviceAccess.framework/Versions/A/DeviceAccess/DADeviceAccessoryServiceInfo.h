@class NSString;

@interface DADeviceAccessoryServiceInfo : NSObject <CUXPCCodable, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long authorizationLevel;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *associatedBundleID;
@property (readonly, copy, nonatomic) NSString *associatedDeviceID;

- (id)initWithXPCObject:(id)a0 error:(id *)a1;
- (void)encodeWithXPCObject:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)descriptionWithLevel:(int)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)persistentDictionaryRepresentation;
- (id)initWithName:(id)a0 authorizationLevel:(unsigned long long)a1 bundleID:(id)a2 deviceID:(id)a3;
- (id)initWithPersistentDictionaryRepresentation:(id)a0 deviceID:(id)a1 error:(id *)a2;

@end
