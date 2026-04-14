@class NSString, AKBarButtonItem;

@interface AKNavigationItem : NSObject

@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) AKBarButtonItem *rightBarButtonItem;

- (void).cxx_destruct;
- (id)init;
- (id)initWithTitle:(id)a0;

@end
