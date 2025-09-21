@class NSArray;
@protocol GEOEnvironmentsControllerDelegate;

@interface GEOEnvironmentsController : NSObject {
    NSArray *_defaultEnvironmentInfos;
    NSArray *_customEnvironmentInfos;
    char _enableCustomEnvironments;
}

@property (weak, nonatomic) id<GEOEnvironmentsControllerDelegate> delegate;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initEnablingCustomEnvironments:(char)a0;
- (id)activeEnvironment;
- (void)addCustomEnvironment:(id)a0;
- (id)environmentInfosForSection:(long long)a0;
- (void)reloadEnvironments;
- (void)reloadEnvironments:(id /* block */)a0;
- (void)removeCustomEnvironment:(id)a0;

@end
