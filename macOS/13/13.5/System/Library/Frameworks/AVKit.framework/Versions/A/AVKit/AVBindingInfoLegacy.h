@class NSString, NSDictionary;

@interface AVBindingInfoLegacy : NSObject

@property (retain) id observer;
@property (copy) NSString *binding;
@property (weak) id observable;
@property (copy) NSString *keyPath;
@property BOOL setToNilWhenDeactivated;
@property (copy) NSDictionary *options;

- (id)description;
- (void).cxx_destruct;
- (id)initWithObserver:(id)a0 binding:(id)a1 observable:(id)a2 keyPath:(id)a3 setToNilWhenDeactivated:(BOOL)a4 options:(id)a5;

@end
