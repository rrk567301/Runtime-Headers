@interface SFResultEngagementFeedback : SFResultFeedback <NSCopying>

@property (readonly, nonatomic) char actionEngaged;
@property (nonatomic) char matchesUnengagedSuggestion;
@property (nonatomic) unsigned long long triggerEvent;
@property (nonatomic) unsigned long long destination;
@property (nonatomic) unsigned long long actionTarget;

+ (char)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithResult:(id)a0 triggerEvent:(unsigned long long)a1 destination:(unsigned long long)a2;
- (id)initWithResult:(id)a0 actionEngaged:(char)a1 triggerEvent:(unsigned long long)a2 destination:(unsigned long long)a3;
- (id)initWithResult:(id)a0 triggerEvent:(unsigned long long)a1 destination:(unsigned long long)a2 actionTarget:(unsigned long long)a3;

@end
