@class NSUUID, NSSet, NSDate;

@interface RTPredictedContextRequestMO : NSManagedObject

@property (nonatomic) long long clientCount;
@property (copy, nonatomic) NSUUID *identifier;
@property (nonatomic) long long inferenceTriggerReason;
@property (nonatomic) float memoryFootprintEnd;
@property (nonatomic) float memoryFootprintStart;
@property (copy, nonatomic) NSDate *requestEndDate;
@property (copy, nonatomic) NSDate *requestStartDate;
@property (retain, nonatomic) NSSet *predictedContexts;

+ (id)fetchRequest;
+ (id)managedObjectWithPredictedContextRequest:(id)a0 inManagedObjectContext:(id)a1;
+ (id)managedObjectWithPredictedContextRequest:(id)a0 managedObject:(id)a1 inManagedObjectContext:(id)a2;

@end
