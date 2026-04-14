@class NSDictionary, NSArray, NSManagedObject;

@interface WADeviceAnalytics_EventSequence : NSObject

@property (retain, nonatomic) NSDictionary *startEvent;
@property (retain, nonatomic) NSDictionary *endEvent;
@property (retain, nonatomic) NSArray *events;
@property (retain, nonatomic) NSManagedObject *startEventMO;
@property (retain, nonatomic) NSManagedObject *endEventMO;
@property (retain, nonatomic) NSArray *eventMOs;
@property (nonatomic) BOOL asc;

- (void).cxx_destruct;
- (id)description;
- (id)initWithStartRecord:(id)a0 endRecord:(id)a1 sequenceRecords:(id)a2 asc:(BOOL)a3 forEvents:(id)a4 forExport:(BOOL)a5;

@end
