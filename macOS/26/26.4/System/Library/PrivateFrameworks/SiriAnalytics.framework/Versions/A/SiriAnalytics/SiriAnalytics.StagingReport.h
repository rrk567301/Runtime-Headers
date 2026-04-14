@interface SiriAnalytics.StagingReport : NSObject <NSSecureCoding>

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic) int addedCount;
@property (nonatomic) int missingTimestampCount;
@property (nonatomic) int result;

+ (id)failed;
+ (id)timedOut;
+ (id)terminated;

- (void)encodeWithCoder:(id)a0;
- (id)initWithResult:(int)a0;
- (id)init;
- (void)added;
- (id)initWithCoder:(id)a0;
- (void)missingTimestamp;

@end
