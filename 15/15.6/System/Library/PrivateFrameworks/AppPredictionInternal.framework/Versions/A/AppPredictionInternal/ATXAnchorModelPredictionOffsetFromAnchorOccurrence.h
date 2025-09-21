@interface ATXAnchorModelPredictionOffsetFromAnchorOccurrence : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) double startSecondsAfterAnchor;
@property (readonly, nonatomic) double endSecondsAfterAnchor;

- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)checkAndReportDecodingFailureIfNeededFordouble:(double)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (id)initWithStartSecondsAfterAnchor:(double)a0 endSecondsAfterAnchor:(double)a1;

@end
