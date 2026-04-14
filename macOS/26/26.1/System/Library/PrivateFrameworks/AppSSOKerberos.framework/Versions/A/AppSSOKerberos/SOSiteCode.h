@class NSString, NSDate;

@interface SOSiteCode : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *code;
@property (readonly, nonatomic) NSDate *timeStamp;
@property (readonly, nonatomic) NSString *networkFingerprint;

- (double)age;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithSiteCode:(id)a0 forNetworkFingerprint:(id)a1;

@end
