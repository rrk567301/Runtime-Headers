@class NSString, NSArray;

@interface ASNavigationItem : NSObject

@property (copy) NSString *title;
@property (copy, nonatomic) NSArray *leftBarButtonItems;
@property (copy, nonatomic) NSArray *rightBarButtonItems;

- (void).cxx_destruct;
- (id)initWithTitle:(id)a0;

@end
