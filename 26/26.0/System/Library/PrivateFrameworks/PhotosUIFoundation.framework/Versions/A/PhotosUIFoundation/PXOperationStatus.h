@class NSError, NSDate;

@interface PXOperationStatus : NSObject <NSCopying>

@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) double progress;
@property (readonly, nonatomic, getter=isIndeterminate) BOOL indeterminate;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) NSDate *creationDate;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)redactedDescription;
- (id)initWithState:(long long)a0 progress:(double)a1 indeterminate:(BOOL)a2 error:(id)a3 creationDate:(id)a4;
- (id)operationStatusByMixingOperationStatus:(id)a0 withMixFactor:(double)a1;

@end
