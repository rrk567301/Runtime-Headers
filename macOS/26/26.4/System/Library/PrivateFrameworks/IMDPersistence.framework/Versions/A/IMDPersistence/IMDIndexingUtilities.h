@interface IMDIndexingUtilities : NSObject

+ (BOOL)_canDonateMessageGUID:(id)a0 withAssociatedMessageType:(long long)a1;
+ (BOOL)_canDonateMessageGUID:(id)a0 withItemType:(long long)a1;
+ (BOOL)canDonateItemDictionary:(id)a0;
+ (BOOL)canDonateMessageRecord:(id)a0;
+ (void)copyIndexableMessageDictionariesWithLimit:(long long)a0 requireIndexableAttachments:(BOOL)a1 isIndexableBlock:(id /* block */)a2 completionHandler:(id /* block */)a3;
+ (BOOL)isItemGroupPhoto:(id)a0;

@end
