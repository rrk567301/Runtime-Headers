@class NSString, NSError;

@interface PLCPLDownloadContext : NSObject

@property (retain) NSString *taskIdentifier;
@property (retain) NSString *resourceTypeDescription;
@property double progress;
@property char completed;
@property (retain) NSError *error;
@property double updateLastQueuedTime;

- (id)description;
- (void).cxx_destruct;
- (void)updateFromDownloadStatusUserInfo:(id)a0;

@end
