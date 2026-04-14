@class NSString, NSMutableArray;

@interface PFBackgroundServiceManagerCategory : NSObject {
    unsigned long long _runningContexts;
    unsigned long long _totalContexts;
    unsigned long long _concurrency;
    int _controlState;
    NSMutableArray *_contexts;
}

@property (readonly) id uuid;
@property (retain) NSString *name;

+ (id)categoryWithName:(id)a0;

- (id)description;
- (id)initWithName:(id)a0;
- (void).cxx_destruct;
- (void)addWorkContext:(id)a0;
- (void)removeWorkContext:(id)a0;
- (void)runNextWorkContext;

@end
