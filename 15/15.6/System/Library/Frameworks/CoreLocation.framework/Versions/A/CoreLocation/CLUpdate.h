@class CLLocation;

@interface CLUpdate : NSObject {
    unsigned long long _diagnostics;
}

@property (readonly, nonatomic) char authorizationDenied;
@property (readonly, nonatomic) char authorizationDeniedGlobally;
@property (readonly, nonatomic) char authorizationRestricted;
@property (readonly) char isStationary;
@property (readonly) char stationary;
@property (readonly, nonatomic) char insufficientlyInUse;
@property (readonly, nonatomic) char locationUnavailable;
@property (readonly, nonatomic) char accuracyLimited;
@property (readonly, nonatomic) char serviceSessionRequired;
@property (readonly, nonatomic) char authorizationRequestInProgress;
@property (readonly, nonatomic) CLLocation *location;

- (void)dealloc;
- (id)initWithLocation:(id)a0 diagnostics:(unsigned long long)a1;

@end
