@class NSError;

@interface LACBackgroundTaskResult : NSObject

@property (readonly, nonatomic) id value;
@property (readonly, nonatomic) NSError *error;

- (id)initWithValue:(id)a0;
- (id)initWithError:(id)a0;
- (id)initWithValue:(id)a0 error:(id)a1;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
