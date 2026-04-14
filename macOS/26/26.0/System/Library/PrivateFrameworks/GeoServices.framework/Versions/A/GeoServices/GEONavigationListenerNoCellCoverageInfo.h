@class NSUUID, NSMeasurement, NSDate;

@interface GEONavigationListenerNoCellCoverageInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *uniqueID;
@property (readonly, nonatomic) NSDate *alertDate;
@property (readonly, nonatomic) NSDate *noCellCoverageStartDate;
@property (readonly, nonatomic) NSMeasurement *distanceAhead;
@property (readonly, nonatomic) double outageDuration;
@property (readonly, nonatomic) NSMeasurement *outageLength;

- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;
- (void)setUniqueID:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)setAlertDate:(id)a0;
- (void)setDistanceAhead:(id)a0;
- (void)setNoCellCoverageStartDate:(id)a0;
- (void)setOutageDuration:(double)a0;
- (void)setOutageLength:(id)a0;

@end
