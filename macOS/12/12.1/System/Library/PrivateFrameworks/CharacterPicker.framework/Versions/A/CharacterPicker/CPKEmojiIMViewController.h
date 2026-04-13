@protocol CPKEmojiIMViewControllerDelegate;

@interface CPKEmojiIMViewController : NSViewController

@property (nonatomic) id<CPKEmojiIMViewControllerDelegate> delegate;

+ (void)startDataPreparation;
+ (id)createAssociatedWindowsOverWindowLevel:(long long)a0;

- (void)reset;
- (id)initWithState:(id)a0;
- (void)setSearchResults:(id)a0;
- (id)getStateInfo;
- (void)willOpenedForSearching;
- (void)setAssociatedWindows:(id)a0 withLocationProvider:(id /* block */)a1;
- (void)setPreviewWindowLocationProvider:(id /* block */)a0;

@end
