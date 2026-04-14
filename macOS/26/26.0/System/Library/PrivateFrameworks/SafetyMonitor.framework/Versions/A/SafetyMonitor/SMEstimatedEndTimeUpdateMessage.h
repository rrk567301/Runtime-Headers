@class NSDate;

@interface SMEstimatedEndTimeUpdateMessage : SMMessage

@property (readonly, nonatomic) NSDate *estimatedEndTime;
@property (readonly, nonatomic) NSDate *coarseEstimatedEndTime;

+ (unsigned long long)messageType;
+ (BOOL)supportsSecureCoding;

- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithSessionID:(id)a0 estimatedEndTime:(id)a1 coarseEstimatedEndTime:(id)a2;
- (id)outputToDictionary;
- (id)initWithDate:(id)a0 messageID:(id)a1 sessionID:(id)a2 estimatedEndTime:(id)a3;
- (id)initWithDate:(id)a0 messageID:(id)a1 sessionID:(id)a2 estimatedEndTime:(id)a3 coarseEstimatedEndTime:(id)a4;

@end
