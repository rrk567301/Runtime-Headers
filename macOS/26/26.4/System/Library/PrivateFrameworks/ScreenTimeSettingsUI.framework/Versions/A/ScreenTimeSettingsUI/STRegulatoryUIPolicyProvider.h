@class STRegulatoryPolicy;

@interface STRegulatoryUIPolicyProvider : NSObject <STRegulatoryUIPolicyProviding>

@property (nonatomic, retain) STRegulatoryPolicy *policy;
@property (nonatomic, retain) id observers;

- (id)currentPolicy;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (id)init;
- (id)initWithInitialPolicy:(id)a0;
- (void)updatePolicy:(id)a0;

@end
