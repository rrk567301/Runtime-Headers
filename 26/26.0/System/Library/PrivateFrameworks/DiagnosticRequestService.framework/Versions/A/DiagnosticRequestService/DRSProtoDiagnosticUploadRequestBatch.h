@class DRSProtoClientDeviceMetadata, NSMutableArray, NSString;

@interface DRSProtoDiagnosticUploadRequestBatch : PBCodable <CKCodeOperationMessageMutation, DRSDecisionServerBatchRequest, NSCopying>

@property (readonly, nonatomic) BOOL hasClientMetadata;
@property (retain, nonatomic) DRSProtoClientDeviceMetadata *clientMetadata;
@property (retain, nonatomic) NSMutableArray *requests;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL hasClientMetadata;
@property (retain, nonatomic) DRSProtoClientDeviceMetadata *clientMetadata;
@property (retain, nonatomic) NSMutableArray *uploadRequests;

+ (Class)uploadRequestsType;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)addUploadRequests:(id)a0;
- (void)clearUploadRequests;
- (id)uploadRequestsAtIndex:(unsigned long long)a0;
- (unsigned long long)uploadRequestsCount;

@end
