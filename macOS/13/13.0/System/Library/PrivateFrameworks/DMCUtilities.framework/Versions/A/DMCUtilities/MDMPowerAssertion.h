@class NSDate;

@interface MDMPowerAssertion : DMCPowerAssertion

@property (readonly, nonatomic) NSDate *creationDate;

+ (id)_dateFormatter;
+ (id)assertionDescriptions;
+ (id)_currentAssertions;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (id)initWithReason:(id)a0;

@end
