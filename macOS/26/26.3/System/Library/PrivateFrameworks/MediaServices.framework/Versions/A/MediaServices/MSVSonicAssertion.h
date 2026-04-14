@class NSString;

@interface MSVSonicAssertion : NSObject {
    BOOL _needsInvalidation;
}

@property (readonly, nonatomic) NSString *name;
@property (copy, nonatomic) id /* block */ invalidationHandler;

+ (BOOL)hasEntitlement;
+ (id)sharedObserver;
+ (BOOL)shouldAlsoUseOSTransaction;

- (void)invalidate;
- (id)description;
- (void)handleInvalidation:(id)a0;
- (id)initWithName:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
