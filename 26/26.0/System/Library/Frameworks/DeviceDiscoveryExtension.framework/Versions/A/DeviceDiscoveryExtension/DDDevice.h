@class NSURL, NSUUID, NSDictionary, NSString, UTType, NSObject, NSData;
@protocol OS_nw_endpoint;

@interface DDDevice : NSObject <CUXPCCodable, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL allowPairing;
@property (nonatomic) double approveTime;
@property (readonly, copy, nonatomic) NSDictionary *persistentDictionaryRepresentation;
@property (nonatomic) unsigned long long deviceSupports;
@property (retain, nonatomic) NSUUID *bluetoothIdentifier;
@property (nonatomic) long long category;
@property (copy, nonatomic) NSString *displayImageName;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) long long mediaPlaybackState;
@property (copy, nonatomic) NSString *mediaContentTitle;
@property (copy, nonatomic) NSString *mediaContentSubtitle;
@property (retain, nonatomic) NSObject<OS_nw_endpoint> *networkEndpoint;
@property (nonatomic) long long protocol;
@property (retain, nonatomic) UTType *protocolType;
@property (nonatomic) long long state;
@property (copy, nonatomic) NSString *SSID;
@property (nonatomic) BOOL supportsGrouping;
@property (copy, nonatomic) NSData *txtRecordData;
@property (copy, nonatomic) NSURL *url;
@property (copy, nonatomic) NSString *wifiAwareServiceName;
@property (nonatomic) long long wifiAwareServiceRole;
@property (copy, nonatomic) NSString *wifiAwareModelName;
@property (copy, nonatomic) NSString *wifiAwareVendorName;

+ (void)mergePersistentDictionary:(id)a0 into:(id)a1;
+ (BOOL)deviceMetadataURLValid:(id)a0;

- (id)initWithXPCObject:(id)a0 error:(id *)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithXPCObject:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)descriptionWithLevel:(int)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)createDADevice;
- (id)initWithDisplayName:(id)a0 category:(long long)a1 protocolType:(id)a2 identifier:(id)a3;
- (id)initWithPersistentDictionaryRepresentation:(id)a0 error:(id *)a1;

@end
