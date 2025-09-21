@class NSString;

@interface PEAdjustmentDataCacheKey : NSObject <NSCopying> {
    NSString *_localIdentifier;
    double _adjustmentDate;
    char _originalAdjustmentData;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithAsset:(id)a0 originalAdjustmentData:(char)a1;

@end
