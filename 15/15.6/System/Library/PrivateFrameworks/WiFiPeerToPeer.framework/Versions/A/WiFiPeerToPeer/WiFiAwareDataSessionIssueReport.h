@class NSNumber;

@interface WiFiAwareDataSessionIssueReport : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSNumber *rtpSequenceNumber;
@property (copy, nonatomic) NSNumber *rtpStartTime;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)rtpSequenceNumberEquals:(id)a0;
- (char)rtpStartTimeEquals:(id)a0;

@end
