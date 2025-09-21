@class NSArray, ATXDefaultWidgetStack;

@interface ATXDefaultHomeScreenItemComparator : NSObject

@property (retain) NSArray *galleryItems;
@property (retain) ATXDefaultWidgetStack *defaultStack;

- (void).cxx_destruct;
- (unsigned long long)rankOfWidgetSuggestedInGallery:(id)a0;
- (char)isStackDefaultStack:(id)a0;
- (void)loadDefaultItemsWithCompletionHandler:(id /* block */)a0;

@end
