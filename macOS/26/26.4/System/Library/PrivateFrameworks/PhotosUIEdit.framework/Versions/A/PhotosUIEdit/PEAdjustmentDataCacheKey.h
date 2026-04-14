@class NSString;

@interface PEAdjustmentDataCacheKey : NSObject <NSCopying> {
    NSString *_localIdentifier;
    double _adjustmentDate;
    BOOL _originalAdjustmentData;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithAsset:(id)a0 originalAdjustmentData:(BOOL)a1;

@end
