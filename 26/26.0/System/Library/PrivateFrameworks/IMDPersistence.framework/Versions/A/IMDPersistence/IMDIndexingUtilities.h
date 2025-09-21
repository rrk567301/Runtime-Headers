@interface IMDIndexingUtilities : NSObject

+ (BOOL)canDonateItemDictionary:(id)a0;
+ (void)copyIndexableMessageDictionariesWithLimit:(long long)a0 requireIndexableAttachments:(BOOL)a1 isIndexableBlock:(id /* block */)a2 completionHandler:(id /* block */)a3;
+ (BOOL)isItemGroupPhoto:(id)a0;

@end
