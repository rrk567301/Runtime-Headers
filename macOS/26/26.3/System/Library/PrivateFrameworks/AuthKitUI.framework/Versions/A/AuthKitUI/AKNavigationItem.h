@class NSString, AKBarButtonItem;

@interface AKNavigationItem : NSObject

@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) AKBarButtonItem *rightBarButtonItem;

- (id)initWithTitle:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
