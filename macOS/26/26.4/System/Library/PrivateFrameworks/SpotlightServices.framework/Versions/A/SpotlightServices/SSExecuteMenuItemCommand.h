@class NSString, NSArray;

@interface SSExecuteMenuItemCommand : SFExecuteMenuItemCommand

@property (retain, nonatomic) NSString *pid;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSArray *menuItemPathComponents;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;

@end
