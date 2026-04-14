@class NSError, NSDate;

@interface PXOperationStatus : NSObject <NSCopying>

@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) double progress;
@property (readonly, nonatomic, getter=isIndeterminate) BOOL indeterminate;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) NSDate *creationDate;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)redactedDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithState:(long long)a0 progress:(double)a1 indeterminate:(BOOL)a2 error:(id)a3 creationDate:(id)a4;
- (id)operationStatusByMixingOperationStatus:(id)a0 withMixFactor:(double)a1;

@end
