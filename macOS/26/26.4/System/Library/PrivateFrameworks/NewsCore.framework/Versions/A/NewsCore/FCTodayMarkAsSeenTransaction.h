@class NSString, NSDate;

@interface FCTodayMarkAsSeenTransaction : NSObject <FCTodayPrivateDataTransaction>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *articleID;
@property (readonly, copy, nonatomic) NSString *clusterID;
@property (readonly, nonatomic) long long articleVersion;
@property (readonly, copy, nonatomic) NSDate *seenDate;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithArticleID:(id)a0 clusterID:(id)a1 articleVersion:(long long)a2 seenDate:(id)a3;
- (void)performWithPrivateDataContext:(id)a0;
- (void)performWithTodayPrivateData:(id)a0;

@end
