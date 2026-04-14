@class NSString;

@interface IMDFilteredMessageCounts : NSObject <NSSecureCoding, NSCoding>

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long deletedMessagesCount;
@property (nonatomic) long long chatBotMessagesCount;
@property (nonatomic) long long junkMessagesCount;
@property (nonatomic) long long systemMessagesCount;
@property (nonatomic) long long businessMessagesCount;
@property (nonatomic) long long promotionalMessagesCount;
@property (nonatomic) long long transactionalMessagesCount;
@property (nonatomic) long long expiredMessagesCount;
@property (nonatomic) long long balloonPluginMessagesCount;
@property (nonatomic, readonly) NSString *description;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)addValuesFromFilteredMessageCounts:(id)a0;

@end
