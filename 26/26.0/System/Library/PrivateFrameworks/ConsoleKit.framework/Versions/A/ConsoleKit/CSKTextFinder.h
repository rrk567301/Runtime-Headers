@protocol CSKTextFinderDelegate;

@interface CSKTextFinder : NSTextFinder

@property (weak, nonatomic) id<CSKTextFinderDelegate> delegate;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)performAction:(long long)a0;
- (void)setFindBarContainer:(id)a0;

@end
