@class NSString;

@interface IMDChatQueryStrings : NSObject

@property (class, nonatomic, readonly) NSString *allColumns;
@property (class, nonatomic, readonly) NSString *allColumnsWithAlias;
@property (class, nonatomic, readonly) NSString *selectAllColumns;
@property (class, nonatomic, readonly) NSString *selectAllColumnsWithAlias;
@property (class, nonatomic, readonly) NSString *copyAllChatsQuery;
@property (class, nonatomic, readonly) NSString *copyAllNamedChatsQuery;
@property (class, nonatomic, readonly) NSString *remapChatsWithLastAddressedSIMIDToNewLastAddressedIDsQuery;
@property (class, nonatomic, readonly) NSString *chatRowIDsSortedByLastMessageDate;
@property (class, nonatomic, readonly) NSString *copyAllActiveChatsQuery;
@property (class, nonatomic, readonly) NSString *copyChatForGUIDQuery;
@property (class, nonatomic, readonly) NSString *copyChatForGUIDUnlockedQuery;
@property (class, nonatomic, readonly) NSString *copyChatGUIDsWithUnreadMessagesQuery;
@property (class, nonatomic, readonly) NSString *copyChatsWithIdentifier;
@property (class, nonatomic, readonly) NSString *copyChatsWithIdentiferAndDomain;

+ (id)allColumnsWithPrefix:(id)a0;
+ (id)copyChatsWithUnreadMessagesWithLimit:(long long)a0 beforeDate:(id)a1 extraCriteria:(id)a2;
+ (id)copyRecentChatsQueryWithFilterCount:(int)a0;

- (id)init;
- (void).cxx_destruct;

@end
