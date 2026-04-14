@interface SiriAnalytics.StagingReport : NSObject <NSSecureCoding>

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic) int addedCount;
@property (nonatomic) int missingTimestampCount;
@property (nonatomic) int result;

+ (id)timedOut;
+ (id)terminated;
+ (id)failed;

- (id)initWithResult:(int)a0;
- (id)init;
- (void)added;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)missingTimestamp;

@end
