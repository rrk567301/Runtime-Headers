@class NSString, NSDate;
@protocol TRIFactorPackSetId;

@interface TRIBackgroundMLTaskHistoryRecord : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSDate *eventDate;
@property (readonly, nonatomic) unsigned char eventType;
@property (readonly, nonatomic) NSString *backgroundMLTaskId;
@property (readonly, nonatomic) int deploymentId;
@property (readonly, nonatomic) NSString<TRIFactorPackSetId> *factorPackSetId;

+ (id)recordWithEventDate:(id)a0 eventType:(unsigned char)a1 backgroundMLTaskId:(id)a2 deploymentId:(int)a3 factorPackSetId:(id)a4;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)isEqualToRecord:(id)a0;
- (id)copyWithReplacementBackgroundMLTaskId:(id)a0;
- (id)copyWithReplacementDeploymentId:(int)a0;
- (id)copyWithReplacementEventDate:(id)a0;
- (id)copyWithReplacementEventType:(unsigned char)a0;
- (id)copyWithReplacementFactorPackSetId:(id)a0;
- (id)initWithEventDate:(id)a0 eventType:(unsigned char)a1 backgroundMLTaskId:(id)a2 deploymentId:(int)a3 factorPackSetId:(id)a4;

@end
