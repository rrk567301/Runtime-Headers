@class NSNumber, NSError, CHIPEventPath;

@interface CHIPEventReport : NSObject

@property (readonly, nonatomic) CHIPEventPath *path;
@property (readonly, nonatomic) NSNumber *eventNumber;
@property (readonly, nonatomic) NSNumber *priority;
@property (readonly, nonatomic) NSNumber *timestamp;
@property (readonly, nonatomic) id value;
@property (readonly, nonatomic) NSError *error;

- (void).cxx_destruct;
- (id)initWithPath:(const struct ConcreteEventPath { unsigned short x0; BOOL x1; unsigned int x2; unsigned int x3; } *)a0 eventNumber:(id)a1 priority:(id)a2 timestamp:(id)a3 value:(id)a4 error:(id)a5;

@end
