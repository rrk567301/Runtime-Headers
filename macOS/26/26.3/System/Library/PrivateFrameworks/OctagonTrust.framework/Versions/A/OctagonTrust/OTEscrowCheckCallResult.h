@class OTEscrowMoveRequestContext;

@interface OTEscrowCheckCallResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property BOOL needsReenroll;
@property long long octagonTrusted;
@property BOOL secureTermsNeeded;
@property long long repairReason;
@property (retain) OTEscrowMoveRequestContext *moveRequest;
@property BOOL repairDisabled;
@property long long daysLeftOnRateLimit;
@property long long rateLimitState;

- (id)dictionaryRepresentation;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
