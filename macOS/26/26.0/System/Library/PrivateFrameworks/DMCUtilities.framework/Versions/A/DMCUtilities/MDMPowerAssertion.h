@class NSDate;

@interface MDMPowerAssertion : DMCPowerAssertion

@property (readonly, nonatomic) NSDate *creationDate;

+ (id)_dateFormatter;
+ (id)_currentAssertions;
+ (id)assertionDescriptions;

- (void)dealloc;
- (id)initWithReason:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
