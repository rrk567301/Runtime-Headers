@class NSNumber;

@interface MTRReadParams : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *fabricFiltered;
@property (nonatomic, getter=shouldFilterByFabric) BOOL filterByFabric;
@property (copy, nonatomic) NSNumber *minEventNumber;
@property (nonatomic, getter=shouldAssumeUnknownAttributesReportable) BOOL assumeUnknownAttributesReportable;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)toReadPrepareParams:(void *)a0;

@end
