@class NSArray;
@protocol GEOEnvironmentsControllerDelegate;

@interface GEOEnvironmentsController : NSObject {
    NSArray *_defaultEnvironmentInfos;
    NSArray *_customEnvironmentInfos;
    BOOL _enableCustomEnvironments;
}

@property (weak, nonatomic) id<GEOEnvironmentsControllerDelegate> delegate;

- (void)dealloc;
- (void).cxx_destruct;
- (void)reloadEnvironments;
- (id)initEnablingCustomEnvironments:(BOOL)a0;
- (void)reloadEnvironments:(id /* block */)a0;
- (id)environmentInfosForSection:(long long)a0;
- (void)addCustomEnvironment:(id)a0;
- (void)removeCustomEnvironment:(id)a0;
- (id)activeEnvironment;

@end
