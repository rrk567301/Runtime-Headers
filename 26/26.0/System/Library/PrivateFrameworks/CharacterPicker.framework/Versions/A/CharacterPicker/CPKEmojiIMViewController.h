@protocol CPKEmojiIMViewControllerDelegate;

@interface CPKEmojiIMViewController : NSViewController

@property (nonatomic) id<CPKEmojiIMViewControllerDelegate> delegate;

+ (id)createAssociatedWindowsOverWindowLevel:(long long)a0;
+ (void)startDataPreparation;

- (id)initWithState:(id)a0;
- (void)reset;
- (void)setSearchResults:(id)a0;
- (id)getStateInfo;
- (void)setAssociatedWindows:(id)a0 withLocationProvider:(id /* block */)a1;
- (void)setPreviewWindowLocationProvider:(id /* block */)a0;
- (void)willOpenedForSearching;

@end
