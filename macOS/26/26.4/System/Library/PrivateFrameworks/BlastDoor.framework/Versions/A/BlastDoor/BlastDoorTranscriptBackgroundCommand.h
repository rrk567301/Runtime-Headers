@class NSString, BlastDoorTranscriptBackgroundCommandTypeWrapper;

@interface BlastDoorTranscriptBackgroundCommand : NSObject {
    void /* unknown type, empty encoding */ transcriptBackgroundCommand;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BlastDoorTranscriptBackgroundCommandTypeWrapper *type;
@property (nonatomic, readonly) BOOL has_replicationSourceID;
@property (nonatomic, readonly) long long replicationSourceID;

- (void).cxx_destruct;
- (id)init;

@end
