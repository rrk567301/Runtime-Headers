@class NSString, BlastDoorBackgroundUpdateInfo, BlastDoorBackgroundRequestInfo;

@interface BlastDoorTranscriptBackgroundCommandTypeWrapper : NSObject {
    void /* unknown type, empty encoding */ transcriptBackgroundCommandType;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly) BlastDoorBackgroundUpdateInfo *update;
@property (nonatomic, readonly) BlastDoorBackgroundUpdateInfo *refresh;
@property (nonatomic, readonly) BlastDoorBackgroundRequestInfo *request;
@property (nonatomic, readonly) BlastDoorBackgroundUpdateInfo *requestResponse;

- (id)init;
- (void).cxx_destruct;

@end
