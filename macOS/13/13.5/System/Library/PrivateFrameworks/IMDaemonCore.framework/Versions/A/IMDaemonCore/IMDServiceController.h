@class NSArray, NSMutableDictionary;

@interface IMDServiceController : NSObject {
    NSMutableDictionary *_services;
}

@property (readonly, nonatomic) NSArray *allServices;

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (id)serviceWithName:(id)a0;
- (void)registerSessionClassWithBundle:(id)a0;

@end
