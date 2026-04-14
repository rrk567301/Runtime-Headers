@class NSString;

@interface DNDAvailabilityService : NSObject {
    NSString *_clientIdentifier;
}

+ (id)serviceForClientIdentifier:(id)a0;
+ (void)initialize;

- (id)_initWithClientIdentifier:(id)a0;
- (void).cxx_destruct;
- (BOOL)isLocalUserAvailableReturningError:(id *)a0;

@end
