@class NSString, NSSet, SFDevice;

@interface DEDDevice : NSObject <DEDDeviceUISupport, NSSecureCoding, NSCopying, DEDSecureArchiving>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *_hashingKey;
@property (retain) NSSet *capabilities;
@property (retain) NSString *address;
@property struct { long long majorVersion; long long minorVersion; long long patchVersion; } operatingSystemVersion;
@property (retain) NSString *build;
@property (retain) NSString *color;
@property (retain) NSString *deviceClass;
@property (retain) NSString *enclosureColor;
@property (retain) NSString *identifier;
@property (retain) NSString *model;
@property (retain) NSString *name;
@property (retain) NSString *productType;
@property (retain) NSString *platform;
@property long long deviceType;
@property (readonly, nonatomic) NSString *publicLogSafeIdentifier;
@property (retain, nonatomic) NSSet *bugSessions;
@property long long status;
@property long long transport;
@property long long remoteTransport;
@property (retain) SFDevice *sfDevice;
@property (readonly, nonatomic) BOOL isRemote;
@property (retain) NSString *hardwareCodename;
@property (retain) NSString *serialNumber;
@property long long homeButtonType;
@property (retain) NSString *uniformTypeIdentifier;
@property (retain) NSString *idsIdentifier;
@property (retain) NSString *companionDeviceIdentifier;
@property (retain) NSString *homeTheaterSystemName;
@property (retain) NSString *homeTheaterSystemIdentifier;
@property (retain) NSString *mediaSystemName;
@property long long mediaSystemRole;
@property (retain) NSString *mediaSystemIdentifier;
@property (retain) NSString *mediaRemoteIdentifier;
@property (retain) NSString *homeKitIdentifier;
@property BOOL isHomeKitResident;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)currentDevice;
+ (struct { long long x0; long long x1; long long x2; })operatingSystemVersionFromArrayRepresentation:(id)a0;
+ (id)archivedClasses;
+ (id)currentDeviceWithDaemonInfo;
+ (id)deviceWithDictionary:(id)a0;
+ (id)_currentDeviceId;
+ (long long)deviceTypeFromIDSDeviceType:(long long)a0;
+ (long long)deviceTypeFromPlatform:(id)a0 deviceClass:(id)a1;
+ (id)deviceForSFDevice:(id)a0 andStatus:(long long)a1;
+ (id)nilSafeDevice;
+ (id)arrayRepresentationForOperatingSystemVersion:(struct { long long x0; long long x1; long long x2; })a0;
+ (id)deviceWithIDSDevice:(id)a0 address:(id)a1;
+ (id)deviceForSFDevice:(id)a0 systemInfo:(id)a1 andStatus:(long long)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isTemporaryDevice;
- (BOOL)isLikeDevice:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)imageURLForScale:(float)a0;
- (BOOL)isCurrentDevice;
- (id)imageURLForDeviceClass:(id)a0 deviceModel:(id)a1 deviceColor:(id)a2 size:(long long)a3 variant:(long long)a4 scale:(float)a5;
- (id)serialize;
- (id)imageData;
- (id)hashingKey;
- (id)initWithCoder:(id)a0;
- (void)fetchIconImageDataForScale:(float)a0 completionCompletion:(id /* block */)a1;
- (BOOL)isEqualToDevice:(id)a0;
- (id)hashingKeyForTempDevice;
- (id)publicLogDescription;
- (id)shortDescription;
- (BOOL)isMoreCompleteThan:(id)a0;
- (BOOL)hasCapabilities:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
