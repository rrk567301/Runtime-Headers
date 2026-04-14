@class NSString;

@interface PAAdjustmentDataCacheKey : NSObject <NSCopying> {
    NSString *_localIdentifier;
    double _adjustmentDate;
}

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithAsset:(id)a0;

@end
