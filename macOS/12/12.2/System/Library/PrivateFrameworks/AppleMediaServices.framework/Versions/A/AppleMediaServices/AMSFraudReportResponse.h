@class NSString;

@interface AMSFraudReportResponse : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSString *nameSpace;
@property long long reportedScore;
@property long long newScore;
@property (retain) NSString *c;
@property (retain) NSString *s;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)initWithURLResult:(id)a0;

@end
