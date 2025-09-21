@class NSObject, INIntent;
@protocol OS_dispatch_queue;

@interface INCIntentDefaultValueProvider : NSObject

@property (readonly, copy, nonatomic) INIntent *intent;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *completionHandlingQueue;

- (void)loadDefaultValuesWithCompletionHandler:(id /* block */)a0;
- (void)loadDefaultValuesWithAttributes:(id)a0 extensionProxy:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithIntent:(id)a0;
- (BOOL)isExpectedDefaultValueError:(id)a0;
- (void).cxx_destruct;

@end
