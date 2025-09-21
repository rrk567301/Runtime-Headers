@class NSString, SMTTRPCandidate, NSArray;

@interface _SMTTRPCandidateMutation : NSObject <SMTTRPCandidateMutating> {
    SMTTRPCandidate *_base;
    NSString *_trpCandidateId;
    NSString *_requestId;
    NSArray *_tcuList;
    NSString *_userId;
    BOOL _isContinuous;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasTrpCandidateId : 1; unsigned char hasRequestId : 1; unsigned char hasTcuList : 1; unsigned char hasUserId : 1; unsigned char hasIsContinuous : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithBase:(id)a0;
- (BOOL)isDirty;
- (void)setUserId:(id)a0;
- (void)setRequestId:(id)a0;
- (void).cxx_destruct;
- (void)setIsContinuous:(BOOL)a0;
- (void)setTcuList:(id)a0;
- (void)setTrpCandidateId:(id)a0;
- (BOOL)getIsContinuous;
- (id)getRequestId;
- (id)getTcuList;
- (id)getTrpCandidateId;
- (id)getUserId;

@end
