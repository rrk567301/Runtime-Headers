@class EKObjectID;

@interface EKEventOccurrenceInfo : NSObject

@property (retain, nonatomic) EKObjectID *objectID;
@property (nonatomic) double date;

- (void).cxx_destruct;
- (id)description;
- (id)initWithObjectID:(id)a0 date:(double)a1;

@end
