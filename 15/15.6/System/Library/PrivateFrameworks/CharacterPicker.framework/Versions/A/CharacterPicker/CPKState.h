@class NSArray;

@interface CPKState : NSObject

@property (nonatomic) char characterSelectionPending;
@property (nonatomic) char forceTopPositionInEmojiPicker;
@property (nonatomic, getter=isShowingGenerationUI) char showingGenerationUI;
@property (nonatomic) char showsCharacterViewerButton;
@property (retain, nonatomic) NSArray *suggestedEmojis;
@property (nonatomic) char supportsInlineTextAttachments;
@property (nonatomic) char supportsImagePaste;
@property (nonatomic) char isShowingContextMenu;
@property (nonatomic) char _overrideCombinedPicker;

+ (id)state;

- (void).cxx_destruct;

@end
