@class NSString, NSData, NSError, NSDate, NSNumber;

@interface KTLoggableData : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (retain) NSData *deviceIdHash;
@property (retain) NSData *clientDataHash;
@property (retain) NSData *clientData;
@property char notInSyncedData;
@property unsigned long long result;
@property (retain) NSError *failure;
@property (retain) NSDate *markExpiryDate;
@property (copy) NSData *deviceID;
@property (copy) NSData *signature;
@property char successfulSync;
@property char ktCapable;
@property (copy) NSString *build;
@property (copy) NSString *product;
@property (copy) NSNumber *version;
@property char marked;

+ (void)combineLoggableDatasForUI:(id)a0 byAdding:(id)a1;
+ (char)isAccountKTCapable:(id)a0;
+ (void)loggableDataForDeviceID:(id)a0 application:(id)a1 completionBlock:(id /* block */)a2;
+ (void)loggableDataForDeviceID:(id)a0 completionBlock:(id /* block */)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)shortDescription;
- (id)diagnosticsJsonDictionary;
- (id)initWithClientData:(id)a0;
- (char)isInputsEqual:(id)a0;

@end
