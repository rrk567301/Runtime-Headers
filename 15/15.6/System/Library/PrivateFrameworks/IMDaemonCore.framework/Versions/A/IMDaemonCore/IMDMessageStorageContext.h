@interface IMDMessageStorageContext : NSObject

@property (nonatomic) char forceReplace;
@property (nonatomic) char modifyError;
@property (nonatomic) char modifyFlags;
@property (nonatomic) unsigned long long flagMask;
@property (nonatomic) char updateMessageCache;
@property (nonatomic) char calculateUnreadCount;
@property (nonatomic) char reindexMessage;
@property (nonatomic, getter=isCloudImport) char cloudImport;
@property (nonatomic, getter=isIncomingMessage) char incomingMessage;
@property (nonatomic) long long reindexReason;

@end
