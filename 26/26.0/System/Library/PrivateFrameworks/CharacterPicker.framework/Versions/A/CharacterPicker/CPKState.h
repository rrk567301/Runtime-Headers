@class NSArray, NSNumber;

@interface CPKState : NSObject {
    NSNumber *_shouldShowGenmojiCreationUIValue;
}

@property (nonatomic) BOOL characterSelectionPending;
@property (nonatomic) BOOL forceTopPositionInEmojiPicker;
@property (nonatomic, getter=isShowingGenerationUI) BOOL showingGenerationUI;
@property (nonatomic) BOOL showsCharacterViewerButton;
@property (retain, nonatomic) NSArray *suggestedEmojis;
@property (nonatomic) BOOL supportsInlineTextAttachments;
@property (nonatomic) BOOL supportsImagePaste;
@property (nonatomic) BOOL isShowingContextMenu;
@property (nonatomic) BOOL _overrideCombinedPicker;
@property (readonly, nonatomic) BOOL shouldShowGenmojiCreationUI;

+ (id)state;

- (void).cxx_destruct;
- (void)clearShouldShowGenmojiCreationUI;

@end
