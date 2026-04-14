@interface MusicKit_RemotePlaybackQueue : NSObject

@property (nonatomic) long long replaceQueueIntent;

+ (id)extractDialogFromCommandResult:(id)a0 error:(id *)a1;

- (int)convertReplaceQueueIntentToMRIntent:(long long)a0;
- (id)initWithReplaceQueueIntent:(long long)a0;

@end
