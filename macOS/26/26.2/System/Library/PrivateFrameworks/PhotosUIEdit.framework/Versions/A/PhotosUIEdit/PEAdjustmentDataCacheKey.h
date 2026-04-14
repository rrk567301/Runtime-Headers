@class NSString;

@interface PEAdjustmentDataCacheKey : NSObject <NSCopying> {
    NSString *_localIdentifier;
    double _adjustmentDate;
    BOOL _originalAdjustmentData;
}

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithAsset:(id)a0 originalAdjustmentData:(BOOL)a1;

@end
