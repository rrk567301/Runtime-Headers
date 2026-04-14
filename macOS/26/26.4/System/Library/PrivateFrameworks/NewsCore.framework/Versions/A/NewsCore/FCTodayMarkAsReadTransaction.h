@class NSString, NSDate;

@interface FCTodayMarkAsReadTransaction : NSObject <FCTodayPrivateDataTransaction>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *articleID;
@property (copy, nonatomic) NSString *clusterID;
@property (nonatomic) long long articleVersion;
@property (copy, nonatomic) NSDate *readDate;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithArticleID:(id)a0 clusterID:(id)a1 articleVersion:(long long)a2 readDate:(id)a3;
- (void)performWithPrivateDataContext:(id)a0;
- (void)performWithTodayPrivateData:(id)a0;

@end
