@class NSString;

@interface PKTapToRadarRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *reason;
@property (nonatomic, getter=isServerGenerated) BOOL serverGenerated;
@property (copy, nonatomic) NSString *relatedRadar;
@property (copy, nonatomic) NSString *alertHeader;
@property (copy, nonatomic) NSString *alertMessage;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
