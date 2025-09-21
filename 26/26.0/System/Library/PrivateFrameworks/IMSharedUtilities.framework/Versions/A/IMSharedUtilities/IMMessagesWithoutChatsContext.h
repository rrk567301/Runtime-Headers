@interface IMMessagesWithoutChatsContext : NSObject

@property (nonatomic) unsigned long long totalMessagesCount;
@property (nonatomic) unsigned long long missingMessagesCount;
@property (nonatomic) BOOL micEnabled;
@property (nonatomic, readonly) float percentMissing;

@end
