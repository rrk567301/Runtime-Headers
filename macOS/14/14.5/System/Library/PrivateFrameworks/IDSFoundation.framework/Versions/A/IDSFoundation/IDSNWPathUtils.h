@class NSObject;
@protocol OS_nw_path_evaluator;

@interface IDSNWPathUtils : NSObject

@property (weak, nonatomic) NSObject<OS_nw_path_evaluator> *slicedInterfaceEvaluator;

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)filterVirtualInterfaces:(char *)a0;
- (id)getDefaultPath;
- (BOOL)isVoWiFiInterface:(char *)a0;

@end
