@class NSUUID, NSDate;

@interface RTTripSegmentMO : NSManagedObject

@property (copy, nonatomic) NSUUID *identifier;
@property (copy, nonatomic) NSUUID *tripCommuteID;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (nonatomic) double tripDistance_m;
@property (nonatomic) double tripDistanceUncertainty_m;
@property (nonatomic) short modeOfTransportation;
@property (nonatomic) BOOL isConsumedByClustering;
@property (nonatomic) int tripSegmentSequence;
@property (nonatomic) int tripSegmentSequenceMax;
@property (nonatomic) double originLatitude;
@property (nonatomic) double originLongitude;
@property (nonatomic) double destinationLatitude;
@property (nonatomic) double destinationLongitude;

+ (id)fetchRequest;
+ (id)managedObjectWithTripSegment:(id)a0 inManagedObjectContext:(id)a1;

@end
