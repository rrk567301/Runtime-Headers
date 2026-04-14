@class NSArray, NSString;
@protocol SCRMailMessageContent;

@interface SCRMailCell : SCRCell <SCRMailMessageContentHost>

@property (readonly, nonatomic) id<SCRMailMessageContent> messageContent;
@property (readonly, nonatomic) NSArray *potentialMessageContent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addItemDescriptionToRequest:(id)a0;
- (void)addEmptyStatusToRequest:(id)a0;
- (id)reorderedChildrenForSummaryDescription:(id)a0;
- (void)addCellLabelToRequest:(id)a0;
- (void)addItemNameContentToRequest:(id)a0;
- (void)addElementSummaryToRequest:(id)a0;
- (unsigned long long)_speakingPriorityOfID:(id)a0;
- (id)_senderElement;
- (void)_addDetailedMessageDescriptionToRequest:(id)a0;

@end
