@class NSError;

@interface PXOperationStatus : NSObject <NSCopying>

@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) double progress;
@property (readonly, nonatomic, getter=isIndeterminate) BOOL indeterminate;
@property (readonly, nonatomic) NSError *error;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithState:(long long)a0 error:(id)a1;
- (id)initWithState:(long long)a0 progress:(double)a1 error:(id)a2;
- (id)operationStatusByMixingOperationStatus:(id)a0 withMixFactor:(double)a1;

@end
