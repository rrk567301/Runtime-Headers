@class NSString, HKSPObserverSet;

@interface HKSPDiagnostics : NSObject

@property (readonly, copy, nonatomic) NSString *label;
@property (readonly, nonatomic) HKSPObserverSet *providers;

- (id)initWithLabel:(id)a0;
- (void)addProvider:(id)a0;
- (void).cxx_destruct;
- (void)removeProvider:(id)a0;
- (void)_registerStateHandler;

@end
