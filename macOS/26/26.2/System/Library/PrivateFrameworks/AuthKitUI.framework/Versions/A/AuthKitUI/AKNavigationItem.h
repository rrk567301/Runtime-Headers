@class NSString, AKBarButtonItem;

@interface AKNavigationItem : NSObject

@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) AKBarButtonItem *rightBarButtonItem;

- (id)initWithTitle:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
