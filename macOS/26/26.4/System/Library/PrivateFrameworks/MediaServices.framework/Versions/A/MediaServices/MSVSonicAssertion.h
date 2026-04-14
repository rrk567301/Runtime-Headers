@class NSString;

@interface MSVSonicAssertion : NSObject {
    BOOL _needsInvalidation;
}

@property (readonly, nonatomic) NSString *name;
@property (copy, nonatomic) id /* block */ invalidationHandler;

+ (id)sharedObserver;
+ (BOOL)hasEntitlement;
+ (BOOL)shouldAlsoUseOSTransaction;

- (void)handleInvalidation:(id)a0;
- (void).cxx_destruct;
- (void)invalidate;
- (id)initWithName:(id)a0;
- (id)description;
- (void)dealloc;

@end
