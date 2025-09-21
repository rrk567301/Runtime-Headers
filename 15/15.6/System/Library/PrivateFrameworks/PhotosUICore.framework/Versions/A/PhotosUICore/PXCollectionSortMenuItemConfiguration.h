@class NSString;

@interface PXCollectionSortMenuItemConfiguration : NSObject

@property (readonly, nonatomic) long long sortOrder;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *systemImageName;
@property (readonly, nonatomic) char selected;
@property (readonly, nonatomic) char actionAscending;

- (void).cxx_destruct;
- (id)initWithSortOrder:(long long)a0 title:(id)a1 systemImageName:(id)a2 selected:(char)a3 actionAscending:(char)a4;

@end
