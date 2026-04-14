@class NSString, NSData, NSError, NSNumber, NSDate;

@interface KTLoggableData : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSData *deviceIdHash;
@property (retain) NSData *clientDataHash;
@property (retain) NSData *clientData;
@property BOOL notInSyncedData;
@property (copy) NSData *deviceID;
@property (copy) NSData *signature;
@property BOOL supportConditionalEnforcement;
@property BOOL successfulSync;
@property BOOL ktCapable;
@property (copy) NSString *build;
@property (copy) NSString *product;
@property (copy) NSNumber *version;
@property unsigned long long result;
@property (retain) NSError *failure;
@property (retain) NSDate *markExpiryDate;
@property BOOL marked;

+ (void)loggableDataForDeviceID:(id)a0 completionBlock:(id /* block */)a1;
+ (BOOL)isAccountKTCapable:(id)a0;
+ (void)loggableDataForDeviceID:(id)a0 application:(id)a1 completionBlock:(id /* block */)a2;
+ (void)combineLoggableDatasForUI:(id)a0 byAdding:(id)a1;
+ (id)ktLoggableDataWithKTIDSData:(id)a0;

- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)shortDescription;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)diagnosticsJsonDictionary;
- (id)initWithClientData:(id)a0;
- (BOOL)isInputsEqual:(id)a0;
- (id)privacyDescriptionError:(id)a0;

@end
