@class TMSession, NSString, NSURL, NSDate;

@interface TMMountableBackupProxy : TMBaseBackupInfo <TMMountableBackupProtocol>

@property (weak) TMSession *session;
@property unsigned long long maximumFileID;
@property (readonly) NSURL *rootURL;
@property (readonly) NSURL *expectedBackupURL;
@property (readonly) NSString *name;
@property (readonly) BOOL isComplete;
@property (readonly) NSDate *dateCompleted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
