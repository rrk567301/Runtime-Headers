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

- (void)encodeWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)a0;

@end
