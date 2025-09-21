@class NSString;

@interface MSVSonicAssertion : NSObject {
    char _needsInvalidation;
}

@property (readonly, nonatomic) NSString *name;
@property (copy, nonatomic) id /* block */ invalidationHandler;

+ (char)hasEntitlement;
+ (id)sharedObserver;
+ (char)shouldAlsoUseOSTransaction;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (void)invalidate;
- (void)handleInvalidation:(id)a0;

@end
