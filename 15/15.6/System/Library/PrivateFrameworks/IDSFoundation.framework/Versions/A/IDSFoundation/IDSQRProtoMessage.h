@class IDSQRProtoH3Message;

@interface IDSQRProtoMessage : NSObject {
    IDSQRProtoH3Message *_message;
}

@property (nonatomic) unsigned long long transactionID;
@property (nonatomic) double startTime;
@property (readonly, nonatomic) int messageType;

+ (id)dataWithEmptyUnAllocBindResponse;

- (void).cxx_destruct;
- (id)data;
- (id)initWithData:(id)a0;
- (id)errorIndication;
- (char)_setupAllocbindRequest:(id)a0 candidatePair:(id)a1 options:(id)a2;
- (char)_setupInfoRequest:(id)a0 candidatePair:(id)a1 options:(id)a2;
- (char)_setupParticipantUpdateRequest:(id)a0 candidatePair:(id)a1 options:(id)a2;
- (char)_setupPluginControlRequest:(id)a0 candidatePair:(id)a1 options:(id)a2;
- (char)_setupPutmaterialRequest:(id)a0 candidatePair:(id)a1 options:(id)a2;
- (char)_setupRegisterAckRequest:(id)a0 candidatePair:(id)a1 options:(id)a2;
- (char)_setupRegisterRequest:(id)a0 candidatePair:(id)a1 options:(id)a2;
- (char)_setupSessionInfoRequest:(id)a0 candidatePair:(id)a1 options:(id)a2;
- (char)_setupStatsRequest:(id)a0 candidatePair:(id)a1 options:(id)a2;
- (char)_setupTestRequest:(id)a0 candidatePair:(id)a1 options:(id)a2;
- (char)_setupUnallocbindRequest:(id)a0 candidatePair:(id)a1 options:(id)a2;
- (id)allocbindResponse;
- (id)diagnosticIndication;
- (id)getMaterialResponse;
- (id)goAwayIndication;
- (id)infoResponse;
- (id)initWithType:(int)a0 candidatePair:(id)a1 options:(id)a2;
- (id)participantUpdateIndication;
- (id)participantUpdateResponse;
- (id)pluginControlIndication;
- (id)pluginControlResponse;
- (id)putMaterialIndication;
- (id)putMaterialResponse;
- (id)reallocateIndication;
- (id)registerIndication;
- (id)registerResponse;
- (id)sessionInfoIndication;
- (id)sessionInfoResponse;
- (id)statsResponse;
- (id)testResponse;
- (id)unallocbindResponse;

@end
