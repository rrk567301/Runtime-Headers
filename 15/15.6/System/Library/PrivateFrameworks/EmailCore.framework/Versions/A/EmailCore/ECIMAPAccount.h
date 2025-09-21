@class NSDate;

@interface ECIMAPAccount : ECAccount

@property (nonatomic) char compactWhenClosingMailboxes;
@property (nonatomic) long long daysBetweenSyncs;
@property (copy, nonatomic) NSDate *dateOfLastSync;
@property (nonatomic) char queriedUserToSetPathPrefix;
@property (nonatomic) char shouldUseGmailLabelStores;
@property (readonly, nonatomic) char shouldUseGmailLabelStoresIsSet;
@property (nonatomic) char needsGmailLablesCleanup;
@property (nonatomic) char hasServerDefinedAllMailMailbox;
@property (nonatomic) char hasServerDefinedArchiveMailbox;
@property (nonatomic) char hasServerDefinedDraftsMailbox;
@property (nonatomic) char hasServerDefinedJunkMailbox;
@property (nonatomic) char hasServerDefinedSentMailbox;
@property (nonatomic) char hasServerDefinedTrashMailbox;
@property (nonatomic) char ignoreServerDefinedArchiveMailbox;
@property (nonatomic) char ignoreServerDefinedDraftsMailbox;
@property (nonatomic) char ignoreServerDefinedJunkMailbox;
@property (nonatomic) char ignoreServerDefinedSentMailbox;
@property (nonatomic) char ignoreServerDefinedTrashMailbox;

+ (id)standardPorts;
+ (id)standardSSLPorts;

- (void).cxx_destruct;
- (void)clearQueriedUserToSetPathPrefix;
- (id)_hostnameFromParentAccount:(id)a0;
- (void)clearDaysBetweenSyncs;
- (long long)defaultPortNumber;
- (long long)defaultSecurePortNumber;
- (id)portNumberObject;
- (id)usesSSLObject;

@end
