@class NSError;

@interface LACBackgroundTaskResult : NSObject

@property (readonly, nonatomic) id value;
@property (readonly, nonatomic) NSError *error;

- (id)initWithError:(id)a0;
- (id)initWithValue:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithValue:(id)a0 error:(id)a1;

@end
