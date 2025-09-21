@class NSString, SMTTRPCandidate, NSArray;

@interface _SMTTRPCandidateMutation : NSObject <SMTTRPCandidateMutating> {
    SMTTRPCandidate *_base;
    NSString *_trpCandidateId;
    NSString *_requestId;
    NSArray *_tcuList;
    NSString *_userId;
    char _isContinuous;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasTrpCandidateId : 1; unsigned char hasRequestId : 1; unsigned char hasTcuList : 1; unsigned char hasUserId : 1; unsigned char hasIsContinuous : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (char)isDirty;
- (void)setRequestId:(id)a0;
- (void)setIsContinuous:(char)a0;
- (void)setUserId:(id)a0;
- (id)initWithBase:(id)a0;
- (void)setTcuList:(id)a0;
- (void)setTrpCandidateId:(id)a0;
- (char)getIsContinuous;
- (id)getRequestId;
- (id)getTcuList;
- (id)getTrpCandidateId;
- (id)getUserId;

@end
