@interface CLClientManagerAuthorizationContext : NSObject

@property (readonly, nonatomic) unsigned long long staticServiceMask;
@property (readonly, nonatomic) unsigned long long effectiveServiceMask;
@property (readonly, nonatomic) unsigned long long provisionalServiceMask;
@property (readonly, nonatomic) int transientAwareRegistrationResult;
@property (readonly, nonatomic) int registrationResult;
@property (readonly, nonatomic) char authorizedForWidgetUpdates;
@property (readonly, nonatomic) int inUseLevel;
@property (readonly, nonatomic) unsigned long long diagnosticMask;

- (id)description;
- (char)isEqual:(id)a0;
- (char)isAuthorizedForServiceTypeMask:(unsigned long long)a0;
- (id)getStateSummary;
- (id)authorizationContextByANDingServiceMaskTuple:(struct CLClientServiceTypeMaskTuple { unsigned long long x0; unsigned long long x1; })a0;
- (char)inUseLevelIsAtLeast:(int)a0;
- (id)initWithInUseLevel:(int)a0 registrationResult:(int)a1 transientAwareRegistrationResult:(int)a2 serviceMaskTuple:(struct CLClientServiceTypeMaskTuple { unsigned long long x0; unsigned long long x1; })a3 diagnosticMask:(unsigned long long)a4 authorizedForWidgetUpdates:(char)a5;
- (char)isAuthorizedForServiceType:(unsigned long long)a0;
- (char)isNonProvisionallyAuthorizedForServiceType:(unsigned long long)a0;
- (char)isNonProvisionallyAuthorizedForServiceTypeMask:(unsigned long long)a0;

@end
