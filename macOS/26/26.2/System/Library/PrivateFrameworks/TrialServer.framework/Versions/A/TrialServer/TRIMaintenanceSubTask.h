@class NSString;

@interface TRIMaintenanceSubTask : NSObject

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) id /* block */ block;

- (void).cxx_destruct;
- (id)initWithName:(id)a0 subtaskBlock:(id /* block */)a1;

@end
