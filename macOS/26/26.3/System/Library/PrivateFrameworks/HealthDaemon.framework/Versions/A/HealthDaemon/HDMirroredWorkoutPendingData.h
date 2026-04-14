@class NSArray;

@interface HDMirroredWorkoutPendingData : NSObject

@property (copy, nonatomic) NSArray *data;
@property (readonly, copy, nonatomic) id /* block */ completion;

- (void).cxx_destruct;
- (id)initWithData:(id)a0 completion:(id /* block */)a1;

@end
