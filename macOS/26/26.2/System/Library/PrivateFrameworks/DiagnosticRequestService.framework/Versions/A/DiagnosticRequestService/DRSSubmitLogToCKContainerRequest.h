@class NSString, NSData, NSDictionary;

@interface DRSSubmitLogToCKContainerRequest : DRSSubmitLogRequest

@property (readonly, nonatomic) NSString *containerName;
@property (readonly, nonatomic) NSString *recordType;
@property (readonly, nonatomic) NSString *fileAssetField;
@property (readonly, nonatomic) NSData *recordDictionaryData;
@property (readonly, nonatomic) NSDictionary *recordDictionary;

+ (id)entityName;
+ (BOOL)_requestMOHasRequiredFields_ON_MOC_QUEUE:(id)a0;
+ (Class)_moClass;
+ (id)xcRecordZoneID;
+ (id)safeguardArchiveZoneID;

- (id)initWithXPCDict:(id)a0;
- (unsigned long long)expectedType;
- (BOOL)isEqualToRequest:(id)a0;
- (id)_initWithSubmitLogToCKContainerRequestMO_ON_MOC_QUEUE:(id)a0;
- (id)recordRepresentation;
- (id)zoneID;
- (void)_configureRequestMO:(id)a0;
- (id)jsonCompatibleDictionaryRepresentationVerbose:(BOOL)a0;
- (id)targetContainerName;
- (id)debugDescription;
- (id)requestType;
- (void).cxx_destruct;

@end
