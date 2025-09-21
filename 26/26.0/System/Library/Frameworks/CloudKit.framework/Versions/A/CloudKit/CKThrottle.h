@class NSNumber, NSString, NSDate;

@interface CKThrottle : NSObject <NSSecureCoding, CKDeepCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSNumber *throttleID;
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
@property (nonatomic) unsigned long long flags;
@property (retain) NSNumber *sentRequestCount;
@property (retain) NSNumber *currentRequestWindowIndex;
@property (retain, nonatomic) NSNumber *errorCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isExpired;
- (void)setFlag:(unsigned long long)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copy;
- (id)init;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)CKDeepCopy;
- (id)CKDeepCopyWithLeafNodeCopyBlock:(id /* block */)a0;
- (BOOL)appliesToCriteria:(id)a0;
- (BOOL)canTestInClientProcess;
- (double)delayUntilNextOperationAllowed;
- (void)incrementSentRequestCount;
- (BOOL)isServerJSONThrottle;
- (BOOL)isServerProtobufThrottle;
- (BOOL)isServerThrottle;
- (id)throttleBlockingUntilNextRequestWindow;

@end
