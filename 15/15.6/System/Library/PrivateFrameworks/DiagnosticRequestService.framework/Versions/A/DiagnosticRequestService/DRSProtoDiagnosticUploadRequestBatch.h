@class DRSProtoClientDeviceMetadata, NSMutableArray, NSString;

@interface DRSProtoDiagnosticUploadRequestBatch : PBCodable <CKCodeOperationMessageMutation, DRSDecisionServerBatchRequest, NSCopying>

@property (readonly, nonatomic) char hasClientMetadata;
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
@property (readonly, nonatomic) char hasClientMetadata;
@property (retain, nonatomic) DRSProtoClientDeviceMetadata *clientMetadata;
@property (retain, nonatomic) NSMutableArray *uploadRequests;

+ (Class)uploadRequestsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addUploadRequests:(id)a0;
- (void)clearUploadRequests;
- (id)uploadRequestsAtIndex:(unsigned long long)a0;
- (unsigned long long)uploadRequestsCount;

@end
