@protocol MessageListItemHelperDelegate;

@interface MessageListItemHelper : NSObject

@property (weak, nonatomic) id<MessageListItemHelperDelegate> delegate;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (char)_isItemAfterItemIDSelected:(id)a0 snapshot:(id)a1;
- (char)_isItemBeforeItemIDSelected:(id)a0 snapshot:(id)a1;
- (char)_isItemIDSelected:(id)a0;
- (char)_isNextItemLastExpandedItemID:(id)a0 snapshot:(id)a1;
- (long long)cellGroupingForItemID:(id)a0 snapshot:(id)a1 isThreaded:(char)a2;
- (id)itemIDAfterItemID:(id)a0 snapshot:(id)a1;
- (id)itemIDBeforeItemID:(id)a0 snapshot:(id)a1;

@end
