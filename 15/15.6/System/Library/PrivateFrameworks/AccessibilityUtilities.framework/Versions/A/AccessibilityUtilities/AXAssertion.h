@class NSString;

@interface AXAssertion : NSObject

@property (class, readonly, nonatomic) char isSupported;

@property (retain, nonatomic) NSString *assertionType;
@property (retain, nonatomic) NSString *identifier;

+ (id)assertionWithType:(id)a0 identifier:(id)a1;
+ (void)ensureAssertionsHaveBeenProcessedWithCompletion:(id /* block */)a0;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (id)initWithType:(id)a0 identifier:(id)a1;
- (char)_hasValidAssertionType;
- (void)_notifyServerAssertionWasAcquired;
- (void)_notifyServerAssertionWasRelinquished;

@end
