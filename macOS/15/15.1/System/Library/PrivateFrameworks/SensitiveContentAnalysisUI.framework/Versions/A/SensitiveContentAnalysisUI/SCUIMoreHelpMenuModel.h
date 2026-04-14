@class NSString, NSArray;

@interface SCUIMoreHelpMenuModel : NSObject

@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) NSArray *actions;
@property (nonatomic) long long options;

+ (void)addDefaultActionsTo:(id)a0;
+ (void)addMenuActionsTo:(id)a0 interventionType:(long long)a1;
+ (void)addOptionalActionsTo:(id)a0 options:(long long)a1;
+ (id)menuTitleWith:(long long)a0 options:(long long)a1;
+ (id)modelWithOptions:(long long)a0 interventionType:(long long)a1 locale:(id)a2;

- (void).cxx_destruct;

@end
