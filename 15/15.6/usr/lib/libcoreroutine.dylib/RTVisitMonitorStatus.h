@interface RTVisitMonitorStatus : NSObject <NSCopying>

@property (nonatomic) char monitoringVisitIncidents;
@property (nonatomic) char monitoringLeechedVisitIncidents;
@property (nonatomic) char monitoringLowConfidenceVisitIncidents;
@property (nonatomic) unsigned long long feedBufferReferenceCounter;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)invalid;
- (id)initWithMonitoringVisitIncidents:(char)a0 monitoringLeechedVisitIncidents:(char)a1 monitoringLowConfidenceVisitIncidents:(char)a2 feedBufferReferenceCounter:(unsigned long long)a3;

@end
