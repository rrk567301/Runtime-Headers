@class NSString, NSArray;

@interface ASNavigationItem : NSObject

@property (copy) NSString *title;
@property (copy, nonatomic) NSArray *leftBarButtonItems;
@property (copy, nonatomic) NSArray *rightBarButtonItems;

- (id)initWithTitle:(id)a0;
- (void).cxx_destruct;

@end
