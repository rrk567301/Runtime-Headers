@class IDSQRProtoH3Message;

@interface IDSQRProtoMessage : NSObject {
    IDSQRProtoH3Message *_message;
}

@property (nonatomic) unsigned long long transactionID;
@property (nonatomic) double startTime;
@property (readonly, nonatomic) int messageType;

+ (id)dataWithEmptyUnAllocBindResponse;

- (id)data;
- (id)initWithData:(id)a0;
- (void).cxx_destruct;
- (id)initWithType:(int)a0 candidatePair:(id)a1 options:(id)a2;
- (BOOL)_setupAllocbindRequest:(id)a0 candidatePair:(id)a1 options:(id)a2;
- (BOOL)_setupInfoRequest:(id)a0 candidatePair:(id)a1 options:(id)a2;
- (BOOL)_setupParticipantUpdateRequest:(id)a0 candidatePair:(id)a1 options:(id)a2;
- (BOOL)_setupPluginControlRequest:(id)a0 candidatePair:(id)a1 options:(id)a2;
- (BOOL)_setupSessionInfoRequest:(id)a0 candidatePair:(id)a1 options:(id)a2;
- (BOOL)_setupPutmaterialRequest:(id)a0 candidatePair:(id)a1 options:(id)a2;
- (BOOL)_setupStatsRequest:(id)a0 candidatePair:(id)a1 options:(id)a2;
- (BOOL)_setupTestRequest:(id)a0 candidatePair:(id)a1 options:(id)a2;
- (BOOL)_setupUnallocbindRequest:(id)a0 candidatePair:(id)a1 options:(id)a2;
- (id)allocbindResponse;
- (id)infoResponse;
- (id)participantUpdateResponse;
- (id)pluginControlResponse;
- (id)sessionInfoResponse;
- (id)getMaterialResponse;
- (id)putMaterialResponse;
- (id)statsResponse;
- (id)testResponse;
- (id)unallocbindResponse;
- (id)diagnosticIndication;
- (id)errorIndication;
- (id)goAwayIndication;
- (id)participantUpdateIndication;
- (id)pluginControlIndication;
- (id)reallocateIndication;
- (id)sessionInfoIndication;
- (id)putMaterialIndication;

@end
