@class NSNumber, NSData;

@interface MTRICDManagementClusterRegisterClientParams : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *checkInNodeID;
@property (copy, nonatomic) NSNumber *monitoredSubject;
@property (copy, nonatomic) NSData *key;
@property (copy, nonatomic) NSData *verificationKey;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;
@property (copy, nonatomic) NSNumber *serverSideProcessingTimeout;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
