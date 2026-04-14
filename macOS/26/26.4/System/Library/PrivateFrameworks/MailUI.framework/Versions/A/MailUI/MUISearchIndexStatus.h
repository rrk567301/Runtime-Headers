@interface MUISearchIndexStatus : NSObject

@property (readonly, nonatomic) unsigned long long messagesInLargestRemoteAccount;
@property (readonly, nonatomic) BOOL isNotFullyIndexed;
@property (readonly, nonatomic) long long scenario;
@property (readonly, nonatomic) unsigned long long messageBodiesIndexed;
@property (readonly, nonatomic) unsigned long long totalMessages;

- (id)initWithLocalMessageBodiesIndexed:(unsigned long long)a0 totalLocalMessages:(unsigned long long)a1 remoteMessageBodiesIndexed:(unsigned long long)a2 totalRemoteMessages:(unsigned long long)a3 messagesInLargestRemoteAccount:(unsigned long long)a4;

@end
