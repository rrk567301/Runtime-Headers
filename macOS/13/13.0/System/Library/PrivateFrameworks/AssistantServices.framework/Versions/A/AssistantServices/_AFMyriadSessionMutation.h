@class AFMyriadSession, NSString, NSUUID, NSData, NSDictionary;

@interface _AFMyriadSessionMutation : NSObject <AFMyriadSessionMutating> {
    AFMyriadSession *_base;
    unsigned long long _generation;
    NSUUID *_sessionId;
    NSUUID *_currentElectionAdvertisementId;
    NSData *_currentElectionAdvertisementData;
    NSDictionary *_electionAdvertisementDataByIds;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasGeneration : 1; unsigned char hasSessionId : 1; unsigned char hasCurrentElectionAdvertisementId : 1; unsigned char hasCurrentElectionAdvertisementData : 1; unsigned char hasElectionAdvertisementDataByIds : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)isDirty;
- (void)setSessionId:(id)a0;
- (void)setGeneration:(unsigned long long)a0;
- (id)initWithBase:(id)a0;
- (unsigned long long)getGeneration;
- (void)setCurrentElectionAdvertisementId:(id)a0;
- (void)setCurrentElectionAdvertisementData:(id)a0;
- (void)setElectionAdvertisementDataByIds:(id)a0;
- (id)getSessionId;
- (id)getCurrentElectionAdvertisementId;
- (id)getCurrentElectionAdvertisementData;
- (id)getElectionAdvertisementDataByIds;

@end
