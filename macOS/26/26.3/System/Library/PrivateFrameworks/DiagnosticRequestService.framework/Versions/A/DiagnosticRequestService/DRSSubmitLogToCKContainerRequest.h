@class NSString, NSData, NSDictionary;

@interface DRSSubmitLogToCKContainerRequest : DRSSubmitLogRequest

@property (readonly, nonatomic) NSString *containerName;
@property (readonly, nonatomic) NSString *recordType;
@property (readonly, nonatomic) NSString *fileAssetField;
@property (readonly, nonatomic) NSData *recordDictionaryData;
@property (readonly, nonatomic) NSDictionary *recordDictionary;

+ (id)entityName;
+ (id)xcRecordZoneID;
+ (BOOL)_requestMOHasRequiredFields_ON_MOC_QUEUE:(id)a0;
+ (Class)_moClass;
+ (id)safeguardArchiveZoneID;

- (id)initWithXPCDict:(id)a0;
- (id)debugDescription;
- (unsigned long long)expectedType;
- (id)_initWithSubmitLogToCKContainerRequestMO_ON_MOC_QUEUE:(id)a0;
- (id)targetContainerName;
- (id)zoneID;
- (void)_configureRequestMO:(id)a0;
- (id)requestType;
- (id)recordRepresentation;
- (void).cxx_destruct;
- (id)jsonCompatibleDictionaryRepresentationVerbose:(BOOL)a0;
- (BOOL)isEqualToRequest:(id)a0;

@end
