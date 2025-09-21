@class NSUUID, VUIndexObservation;

@interface VUIndexTag : NSManagedObject

@property (nonatomic) char isPrimary;
@property (nonatomic) char resolved;
@property (nonatomic) short type;
@property (nonatomic, copy) NSUUID *uuid;
@property (nonatomic, retain) VUIndexObservation *observation;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
