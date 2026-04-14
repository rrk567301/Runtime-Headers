@class NSString, NSImageView, NSTextField;

@interface PPSharingServiceViewController : NSServiceViewController

@property (weak) NSImageView *stateImage;
@property (weak) NSTextField *stateText;
@property (retain) NSString *firewallWarningText;

+ (id)homeFolder;
+ (BOOL)isBlockedByFirewall;

- (void)updateView;
- (void)setEditable:(BOOL)a0;
- (void).cxx_destruct;
- (unsigned long long)awakeFromRemoteView;
- (void)didSelect;
- (void)revealElementForKey:(id)a0;
- (void)onOffButtonPressed;
- (void)setStatus:(long long)a0 string:(id)a1;

@end
