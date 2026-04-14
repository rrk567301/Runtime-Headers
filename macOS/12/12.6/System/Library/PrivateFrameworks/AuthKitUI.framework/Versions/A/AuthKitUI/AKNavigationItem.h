@class NSString, AKBarButtonItem;

@interface AKNavigationItem : NSObject

@property (copy) NSString *title;
@property (retain) AKBarButtonItem *rightBarButtonItem;

- (id)init;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0;

@end
