@class NSMutableDictionary;
@protocol PXCMMActionPerformerDelegate;

@interface PXCMMActionManager : NSObject

@property (readonly, nonatomic) NSMutableDictionary *performerClassByType;
@property (weak, nonatomic) id<PXCMMActionPerformerDelegate> performerDelegate;

- (id)init;
- (id)actionPerformerForActionType:(id)a0;
- (void).cxx_destruct;
- (Class)actionPerformerClassForActionType:(id)a0;
- (id)messageComposeActionPerformer;
- (id)photosPickerActionPerformer;
- (id)publishActionPerformer;

@end
