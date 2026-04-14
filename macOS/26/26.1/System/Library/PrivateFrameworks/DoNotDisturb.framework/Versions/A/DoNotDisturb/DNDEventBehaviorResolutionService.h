@class NSString;

@interface DNDEventBehaviorResolutionService : NSObject {
    NSString *_clientIdentifier;
}

+ (id)serviceForClientIdentifier:(id)a0;
+ (void)initialize;

- (id)_initWithClientIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)resolveBehaviorForEventDetails:(id)a0 error:(id *)a1;

@end
