@class NSString, BlastDoorTranscriptBackgroundCommandTypeWrapper;

@interface BlastDoorTranscriptBackgroundCommand : NSObject {
    void /* unknown type, empty encoding */ transcriptBackgroundCommand;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BlastDoorTranscriptBackgroundCommandTypeWrapper *type;
@property (nonatomic, readonly) BOOL has_replicationSourceID;
@property (nonatomic, readonly) long long replicationSourceID;

- (id)init;
- (void).cxx_destruct;

@end
