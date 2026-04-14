@class NSArray, IMDIndexingContext, NSObject;
@protocol OS_dispatch_group;

@interface IMDCoreSpotlightSelectiveReindexingJob : NSObject

@property (readonly, nonatomic) NSArray *messageGUIDs;
@property (readonly, nonatomic) NSArray *chatGUIDs;
@property (readonly, nonatomic) IMDIndexingContext *context;
@property (readonly, nonatomic) NSObject<OS_dispatch_group> *group;

+ (id)_sanitizedSearchableItemIdentifiers:(id)a0;

- (void).cxx_destruct;
- (void)_enterGroup;
- (BOOL)_indexChats;
- (BOOL)_indexMessages;
- (void)_leaveGroup;
- (id)initWithItemIdentifiers:(id)a0;
- (void)runWithAcknowledgementHandler:(id /* block */)a0;

@end
