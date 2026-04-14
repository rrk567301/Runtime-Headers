@class NSArray;

@interface CPKState : NSObject

@property (nonatomic) BOOL characterSelectionPending;
@property (nonatomic) BOOL forceTopPositionInEmojiPicker;
@property (retain, nonatomic) NSArray *suggestedEmojis;

+ (id)state;

- (void).cxx_destruct;

@end
