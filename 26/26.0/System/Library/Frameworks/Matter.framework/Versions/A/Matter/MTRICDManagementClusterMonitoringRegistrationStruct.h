@class NSNumber;

@interface MTRICDManagementClusterMonitoringRegistrationStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *checkInNodeID;
@property (copy, nonatomic) NSNumber *monitoredSubject;
@property (copy, nonatomic) NSNumber *clientType;
@property (copy, nonatomic) NSNumber *fabricIndex;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
