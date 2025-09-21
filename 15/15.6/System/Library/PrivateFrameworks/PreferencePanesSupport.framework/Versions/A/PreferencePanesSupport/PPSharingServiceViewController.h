@class NSString, NSImageView, NSTextField;

@interface PPSharingServiceViewController : NSServiceViewController

@property (weak) NSImageView *stateImage;
@property (weak) NSTextField *stateText;
@property (retain) NSString *firewallWarningText;

+ (id)homeFolder;
+ (char)isBlockedByFirewall;

- (void).cxx_destruct;
- (void)setEditable:(char)a0;
- (unsigned long long)awakeFromRemoteView;
- (void)updateView;
- (void)didSelect;
- (void)revealElementForKey:(id)a0;
- (void)onOffButtonPressed;
- (void)setStatus:(long long)a0 string:(id)a1;

@end
