@class NSMenu;
@protocol CIMMenuControllerDataSource;

@interface CIMMenuController : NSObject

@property (retain, nonatomic) NSMenu *originalMenu;
@property (retain, nonatomic) NSMenu *menu;
@property (weak, nonatomic) id<CIMMenuControllerDataSource> dataSource;

+ (id)sharedMenuControllerWithDataSource:(id)a0;

- (void).cxx_destruct;
- (id)init;
- (void)awakeFromNib;

@end
