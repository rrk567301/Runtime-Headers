@class OTEscrowMoveRequestContext;

@interface OTEscrowCheckCallResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property BOOL needsReenroll;
@property BOOL octagonTrusted;
@property BOOL secureTermsNeeded;
@property long long repairReason;
@property (retain) OTEscrowMoveRequestContext *moveRequest;
@property BOOL repairDisabled;

- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
