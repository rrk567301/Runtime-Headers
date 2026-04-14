@class NSString, CSSearchableIndex;

@interface CHInteraction : NSObject <InteractionProtocol>

@property (readonly, nonatomic) CSSearchableIndex *searchableIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (void)deleteInteractionWithCall:(id)a0;
- (void)deleteInteractionWithCalls:(id)a0;
- (void)donateCallHistoryInteractionWithCall:(id)a0;

@end
