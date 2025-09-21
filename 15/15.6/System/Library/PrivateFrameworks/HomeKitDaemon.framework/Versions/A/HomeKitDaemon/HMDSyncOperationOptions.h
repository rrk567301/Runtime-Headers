@class NSString;

@interface HMDSyncOperationOptions : HMFObject

@property (readonly, nonatomic) unsigned long long operationType;
@property (readonly, nonatomic) NSString *zoneName;
@property (nonatomic, getter=isCloudConflict) char cloudConflict;
@property (nonatomic, getter=isDelayRespected) char delayRespected;

- (id)description;
- (void).cxx_destruct;
- (id)initWithOperationType:(unsigned long long)a0 zoneName:(id)a1 cloudConflict:(char)a2 delayRespected:(char)a3;
- (id)initWithOperationType:(unsigned long long)a0 zoneName:(id)a1 delayRespected:(char)a2;

@end
