@class NSString, NSArray;

@interface SSExecuteMenuItemCommand : SFExecuteMenuItemCommand

@property (retain, nonatomic) NSString *pid;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSArray *menuItemPathComponents;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
