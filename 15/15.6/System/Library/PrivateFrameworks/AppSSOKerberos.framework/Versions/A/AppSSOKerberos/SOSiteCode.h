@class NSString, NSDate;

@interface SOSiteCode : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSString *code;
@property (readonly, nonatomic) NSDate *timeStamp;
@property (readonly, nonatomic) NSString *networkFingerprint;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (double)age;
- (id)initWithSiteCode:(id)a0 forNetworkFingerprint:(id)a1;

@end
