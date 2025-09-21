@class NSArray, NSMutableDictionary;

@interface ATXHomeScreenConfigurationComponents : NSObject {
    NSMutableDictionary *_stackForStackedWidgetIdDictionary;
}

@property (readonly, nonatomic) NSArray *apps;
@property (readonly, nonatomic) NSArray *pinnedWidgets;
@property (readonly, nonatomic) NSArray *stackedWidgets;
@property (readonly, nonatomic) NSArray *stacks;

- (id)init;
- (void).cxx_destruct;
- (id)initWithConfigurations:(id)a0;
- (char)containsWidgetWithBundleId:(id)a0 kind:(id)a1 size:(unsigned long long)a2;
- (id)stackForStackedWidget:(id)a0;

@end
