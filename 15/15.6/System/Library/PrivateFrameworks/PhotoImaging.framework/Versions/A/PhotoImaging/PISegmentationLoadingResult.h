@class NSError;

@interface PISegmentationLoadingResult : NSObject

@property (readonly, nonatomic) id object;
@property (readonly, nonatomic) char success;
@property (readonly, nonatomic) NSError *error;

- (void).cxx_destruct;
- (id)initWithObject:(id)a0 success:(char)a1 error:(id)a2;

@end
