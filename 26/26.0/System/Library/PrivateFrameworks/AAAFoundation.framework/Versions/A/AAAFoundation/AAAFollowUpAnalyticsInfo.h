@class NSString, NSNumber, NSError;

@interface AAAFollowUpAnalyticsInfo : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *eventName;
@property (copy, nonatomic) NSString *cfuType;
@property (copy, nonatomic) NSString *proxiedBundleID;
@property (copy, nonatomic) NSString *flowID;
@property (copy, nonatomic) NSString *deviceSessionID;
@property (copy, nonatomic) NSString *client;
@property (copy, nonatomic) NSNumber *didSucceed;
@property (copy, nonatomic) NSNumber *hasProxiedDevice;
@property (copy, nonatomic) NSError *postedReasonError;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)cfuReasonAnalyticsEvent;

@end
