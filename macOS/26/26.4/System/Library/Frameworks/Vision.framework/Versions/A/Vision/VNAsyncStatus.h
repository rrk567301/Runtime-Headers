@class NSError;

@interface VNAsyncStatus : NSObject <NSCopying>

@property (readonly, nonatomic) BOOL completed;
@property (readonly, nonatomic) NSError *error;

- (id)initWithStatus:(BOOL)a0 error:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)init;
- (id)description;

@end
