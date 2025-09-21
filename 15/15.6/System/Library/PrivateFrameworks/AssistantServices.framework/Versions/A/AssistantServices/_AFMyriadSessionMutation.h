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
- (char)isDirty;
- (void)setSessionId:(id)a0;
- (void)setGeneration:(unsigned long long)a0;
- (id)getCurrentElectionAdvertisementData;
- (id)getCurrentElectionAdvertisementId;
- (id)getElectionAdvertisementDataByIds;
- (unsigned long long)getGeneration;
- (id)getSessionId;
- (id)initWithBase:(id)a0;
- (void)setCurrentElectionAdvertisementData:(id)a0;
- (void)setCurrentElectionAdvertisementId:(id)a0;
- (void)setElectionAdvertisementDataByIds:(id)a0;

@end
