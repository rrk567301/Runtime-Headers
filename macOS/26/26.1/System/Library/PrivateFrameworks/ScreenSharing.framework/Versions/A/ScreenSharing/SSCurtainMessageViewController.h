@class NSString, NSTextField;
@protocol SSCurtainMessageViewControllerDelegate;

@interface SSCurtainMessageViewController : NSViewController {
    NSString *_machineName;
}

@property NSTextField *curtainMessageTextField;
@property (getter=isRunningAsSheet) BOOL runningAsSheet;
@property id<SSCurtainMessageViewControllerDelegate> delegate;
@property (retain) NSString *machineName;
@property (copy) NSString *curtainMessage;

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)focus;
- (void)dealloc;
- (void)awakeFromNib;
- (void)cancelClicked:(id)a0;
- (void)okClicked:(id)a0;
- (void)updateTitle;

@end
