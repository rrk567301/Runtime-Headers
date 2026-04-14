@class NSString;

@interface WBSLeakAuditorSessionManager : NSObject <WBSLeakAuditorReporterDelegate>

@property (class, readonly, nonatomic) WBSLeakAuditorSessionManager *sharedManager;

@property (retain, nonatomic) NSString *temporaryDirectory;
@property (retain, nonatomic) NSString *currentSessionLogPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (id)_currentTimestamp;
- (BOOL)startNewSession;
- (BOOL)saveCheckpoint:(id)a0;
- (id)_defaultSessionLogParentDirectory;
- (id)_defaultSessionLogPath;
- (BOOL)_writeToSessionLog:(id)a0 fields:(id)a1;
- (BOOL)endSessionWithLogFileName:(id)a0 parentDirectory:(id)a1;
- (BOOL)endSessionWithLogPath:(id)a0;
- (id)findFirstLeakInSession:(id)a0 havingCheckpoint:(id)a1;
- (id)parseCurrentSessionLog;
- (id)parseLogForSession:(id)a0;
- (void)reportLeak:(id)a0;

@end
