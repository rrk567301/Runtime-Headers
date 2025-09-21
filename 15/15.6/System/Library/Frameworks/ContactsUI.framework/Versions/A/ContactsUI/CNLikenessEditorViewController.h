@class PRLikeness;
@protocol CNLikenessEditorHostDelegate;

@interface CNLikenessEditorViewController : NSViewController

@property (retain) PRLikeness *likeness;
@property char likenessNeedsUpdating;
@property (weak) id<CNLikenessEditorHostDelegate> editorHost;

- (void).cxx_destruct;
- (void)configureInitialDisplayForLikeness:(id)a0 isMe:(char)a1;
- (id)likenessWithUpdateBlock:(id /* block */)a0 createBlock:(id /* block */)a1;

@end
