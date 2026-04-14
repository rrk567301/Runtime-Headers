@class NSDate;

@interface MDMPowerAssertion : DMCPowerAssertion

@property (readonly, nonatomic) NSDate *creationDate;

+ (id)_dateFormatter;
+ (id)_currentAssertions;
+ (id)assertionDescriptions;

- (id)initWithReason:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (void)dealloc;

@end
