@class HMDManagedObjectCodingModel;

@interface HMDCodingConditionSet : NSObject <NSCopying> {
    HMDManagedObjectCodingModel *_model;
    unsigned long long _bitmask;
}

- (void)addCondition:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void)removeCondition:(id)a0;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithModel:(id)a0 conditions:(id)a1;

@end
