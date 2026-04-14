@class NSString, BlastDoorTranscriptBackgroundCommand, IMDAccount, IMDServiceSession;

@interface IMTranscriptBackgroundCommandPipelineParameter : NSObject <IMTranscriptBackgroundCommandProcessingParameter, IMFindAccountProcessingParameter>

@property (copy, nonatomic) NSString *fromIdentifier;
@property (copy, nonatomic) NSString *toIdentifier;
@property (readonly, nonatomic) BOOL isFromMe;
@property (copy, nonatomic) NSString *replicationSourceServiceName;
@property (retain, nonatomic) IMDAccount *account;
@property (retain, nonatomic) IMDServiceSession *serviceSession;
@property (retain, nonatomic) BlastDoorTranscriptBackgroundCommand *transcriptBackgroundCommand;

- (void).cxx_destruct;
- (id)description;
- (id)initWithDefusedMessage:(id)a0 idsTrustedData:(id)a1;

@end
