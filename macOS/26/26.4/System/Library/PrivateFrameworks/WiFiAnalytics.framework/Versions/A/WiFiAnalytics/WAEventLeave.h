@interface WAEventLeave : WAEvent

@property (nonatomic) BOOL isInVoluntary;
@property (nonatomic) double associationDuration;

+ (id)leaveReasonAsString:(int)a0;

- (void)updateRecord:(id)a0;
- (id)description;
- (id)initWithBssid:(id)a0 ssid:(id)a1 at:(id)a2 data:(struct { BOOL x0; int x1; int x2; short x3; double x4; short x5; })a3 withLqmHistory:(id)a4 withError:(id *)a5;
- (BOOL)processEventOnPersistentContainer:(id)a0 andRunPostprocessing:(id)a1 withError:(id *)a2;
- (BOOL)processEventOnPersistentContainer:(id)a0 withError:(id *)a1;

@end
