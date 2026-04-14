@interface NSFrontmostDocumentWindowObserver : NSObject

+ (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
+ (void)registerForInterestedFileProviders;
+ (void)_mainWindowOrURLsDidChange;
+ (void)window:(id)a0 didChangeRepresentedURLFromURL:(id)a1 toURL:(id)a2;

@end
