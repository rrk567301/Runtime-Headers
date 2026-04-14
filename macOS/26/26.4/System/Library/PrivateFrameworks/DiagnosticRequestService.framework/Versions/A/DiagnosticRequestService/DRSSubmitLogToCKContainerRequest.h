@class NSString, NSData, NSDictionary;

@interface DRSSubmitLogToCKContainerRequest : DRSSubmitLogRequest

@property (readonly, nonatomic) NSString *containerName;
@property (readonly, nonatomic) NSString *recordType;
@property (readonly, nonatomic) NSString *fileAssetField;
@property (readonly, nonatomic) NSData *recordDictionaryData;
@property (readonly, nonatomic) NSDictionary *recordDictionary;

+ (id)entityName;
+ (id)xcRecordZoneID;
+ (id)appleCareArchiveZoneID;
+ (id)safeguardArchiveZoneID;
+ (BOOL)_requestMOHasRequiredFields_ON_MOC_QUEUE:(id)a0;
+ (Class)_moClass;

- (id)initWithXPCDict:(id)a0;
- (BOOL)isEqualToRequest:(id)a0;
- (id)debugDescription;
- (id)zoneID;
- (id)targetContainerName;
- (id)requestType;
- (void)_configureRequestMO:(id)a0;
- (unsigned long long)expectedType;
- (id)jsonCompatibleDictionaryRepresentationVerbose:(BOOL)a0;
- (id)recordRepresentation;
- (void).cxx_destruct;
- (id)_initWithSubmitLogToCKContainerRequestMO_ON_MOC_QUEUE:(id)a0;

@end
