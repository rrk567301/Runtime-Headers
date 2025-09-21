@interface SMLikelyReceiverOptions : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) char requireEligibility;
@property (readonly, nonatomic) char requireContact;
@property (readonly, nonatomic) char requireNonBlockedContact;
@property (readonly, nonatomic) char requireOnlyFavoritedHandles;
@property (readonly, nonatomic) char requireOnlyPastSessionRecipients;

+ (id)defaultOptions;

- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)hasNoFilters;
- (id)initWithRequireEligibility:(char)a0 requireContact:(char)a1 requireNonBlockedContact:(char)a2 requireOnlyFavoritedHandles:(char)a3 requireOnlyPastSessionRecipients:(char)a4;

@end
