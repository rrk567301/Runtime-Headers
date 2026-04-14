@class NSString, HKSPObserverSet;

@interface HKSPDiagnostics : NSObject

@property (readonly, copy, nonatomic) NSString *label;
@property (readonly, nonatomic) HKSPObserverSet *providers;

- (void).cxx_destruct;
- (void)_registerStateHandler;
- (id)initWithLabel:(id)a0;
- (void)removeProvider:(id)a0;
- (void)addProvider:(id)a0;

@end
