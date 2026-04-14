@class NSNumber, NSString, NSDate;

@interface CKThrottle : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSNumber *throttleID;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *containerIdentifier;
@property (retain, nonatomic) NSNumber *databaseScope;
@property (copy, nonatomic) NSString *zoneName;
@property (retain, nonatomic) NSNumber *operationType;
@property (copy, nonatomic) NSString *serviceName;
@property (copy, nonatomic) NSString *functionName;
@property (copy, nonatomic) NSString *bundleID;
@property (copy, nonatomic) NSString *operationGroupNamePrefix;
@property (retain, nonatomic) NSDate *throttleStartDate;
@property (retain, nonatomic) NSNumber *intervalLengthSeconds;
@property (retain, nonatomic) NSNumber *repeatEverySeconds;
@property (retain, nonatomic) NSNumber *allowedRequestCount;
@property (retain, nonatomic) NSDate *expirationDate;
@property (retain, nonatomic) NSNumber *sentRequestCount;
@property (retain, nonatomic) NSNumber *currentRequestWindowIndex;
@property (retain, nonatomic) NSNumber *errorCode;
@property (retain, nonatomic) NSNumber *isServerThrottle;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isExpired;
- (id)throttleBlockingUntilNextRequestWindow;
- (BOOL)canTestInClientProcess;
- (BOOL)appliesToCriteria:(id)a0;
- (double)delayUntilNextOperationAllowed;
- (void)incrementSentRequestCount;

@end
