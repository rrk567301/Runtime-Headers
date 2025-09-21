@class NSString;

@interface AVAudioApplicationSpecification : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) long long audioAppType;
@property (nonatomic) struct { unsigned int val[8]; } appAuditToken;
@property (retain, nonatomic) NSString *attributionBundleID;
@property (retain, nonatomic) NSString *processName;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
