@class NSError;

@interface VNAsyncStatus : NSObject <NSCopying>

@property (readonly, nonatomic) char completed;
@property (readonly, nonatomic) NSError *error;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithStatus:(char)a0 error:(id)a1;

@end
