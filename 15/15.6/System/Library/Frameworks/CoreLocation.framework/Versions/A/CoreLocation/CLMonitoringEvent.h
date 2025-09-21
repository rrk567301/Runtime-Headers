@class NSString, CLCondition, NSDate;

@interface CLMonitoringEvent : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long diagnosticMask;
@property (readonly) NSString *identifier;
@property (readonly) CLCondition *refinement;
@property (readonly, nonatomic) unsigned long long state;
@property (readonly) NSDate *date;
@property (readonly, nonatomic) char authorizationDenied;
@property (readonly, nonatomic) char authorizationDeniedGlobally;
@property (readonly, nonatomic) char authorizationRestricted;
@property (readonly, nonatomic) char insufficientlyInUse;
@property (readonly, nonatomic) char accuracyLimited;
@property (readonly, nonatomic) char conditionUnsupported;
@property (readonly, nonatomic) char conditionLimitExceeded;
@property (readonly, nonatomic) char persistenceUnavailable;
@property (readonly, nonatomic) char serviceSessionRequired;
@property (readonly, nonatomic) char authorizationRequestInProgress;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setState:(unsigned long long)a0;
- (id)initWithIdentifier:(id)a0 refinement:(id)a1 state:(unsigned long long)a2 date:(id)a3 diagnostics:(unsigned long long)a4;
- (void)updateDiagnosticMask:(unsigned long long)a0;
- (void)updateMonitoringState:(unsigned long long)a0;

@end
