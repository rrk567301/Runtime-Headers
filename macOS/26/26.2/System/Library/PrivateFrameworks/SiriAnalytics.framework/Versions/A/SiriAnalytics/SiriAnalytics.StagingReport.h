@interface SiriAnalytics.StagingReport : NSObject <NSSecureCoding>

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic) int addedCount;
@property (nonatomic) int missingTimestampCount;
@property (nonatomic) int result;

+ (id)terminated;
+ (id)timedOut;
+ (id)failed;

- (id)initWithResult:(int)a0;
- (id)initWithCoder:(id)a0;
- (void)added;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (void)missingTimestamp;

@end
