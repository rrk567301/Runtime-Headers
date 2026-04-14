@class NSString, NSDate;

@interface FCTodayMarkAsSeenTransaction : NSObject <FCTodayPrivateDataTransaction>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *articleID;
@property (readonly, nonatomic) long long articleVersion;
@property (readonly, copy, nonatomic) NSDate *seenDate;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithArticleID:(id)a0 articleVersion:(long long)a1 seenDate:(id)a2;
- (void)performWithPrivateDataContext:(id)a0;
- (void)performWithTodayPrivateData:(id)a0;

@end
