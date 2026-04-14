@interface SCNSMoreHelpMenu : NSAlert <SCUIMoreHelpMenuController> {
    void /* unknown type, empty encoding */ model;
    void /* unknown type, empty encoding */ container;
}

@property (nonatomic, weak) void /* function */ menuDelegate;

+ (id)menu;
+ (id)menuWithOptions:(long long)a0;
+ (id)menuWithAnalysis:(id)a0 options:(long long)a1 error:(id *)a2;
+ (id)menuWithOptions:(long long)a0 interventionType:(long long)a1;

- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)beginSheetModalForWindow:(id)a0;

@end
