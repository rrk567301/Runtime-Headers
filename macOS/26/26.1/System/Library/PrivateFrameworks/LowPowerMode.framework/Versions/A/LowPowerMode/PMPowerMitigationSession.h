@class NSString;

@interface PMPowerMitigationSession : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *sessionSource;
@property (readonly, nonatomic) long long engagementReason;
@property (readonly, nonatomic) double timeDuration;
@property (readonly, nonatomic) long long systemWideMitigationLevel;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithSource:(id)a0 reason:(long long)a1 level:(long long)a2;
- (id)initWithSource:(id)a0 reason:(long long)a1 level:(long long)a2 duration:(double)a3;
- (BOOL)isTimedSession;

@end
