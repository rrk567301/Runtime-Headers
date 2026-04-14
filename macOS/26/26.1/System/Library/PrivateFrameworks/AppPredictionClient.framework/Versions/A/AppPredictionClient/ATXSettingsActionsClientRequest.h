@class NSString, NSDate;

@interface ATXSettingsActionsClientRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long limit;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSString *clientBundleID;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
