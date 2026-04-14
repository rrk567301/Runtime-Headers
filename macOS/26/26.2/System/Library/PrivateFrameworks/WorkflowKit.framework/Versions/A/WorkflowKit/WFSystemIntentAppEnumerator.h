@class NSDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface WFSystemIntentAppEnumerator : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    int _token;
    NSDictionary *_identifiersByIntentName;
    NSDictionary *_identifiersByUserActivityType;
}

- (void).cxx_destruct;
- (void)enumerate;
- (id)init;
- (void)dealloc;
- (id)supportedIdentifiersForIntentClassName:(id)a0 includingUserActivityBasedApps:(BOOL)a1;

@end
