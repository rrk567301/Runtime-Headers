@class NSDate;

@interface MDMPowerAssertion : DMCPowerAssertion

@property (readonly, nonatomic) NSDate *creationDate;

+ (id)_dateFormatter;
+ (id)_currentAssertions;
+ (id)assertionDescriptions;

- (void).cxx_destruct;
- (id)initWithReason:(id)a0;
- (id)description;
- (void)dealloc;

@end
