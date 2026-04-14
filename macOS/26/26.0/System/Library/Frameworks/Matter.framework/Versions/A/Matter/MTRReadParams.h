@class NSNumber;

@interface MTRReadParams : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSNumber *fabricFiltered;
@property (nonatomic, getter=shouldFilterByFabric) BOOL filterByFabric;
@property (copy, nonatomic) NSNumber *minEventNumber;
@property (nonatomic, getter=shouldAssumeUnknownAttributesReportable) BOOL assumeUnknownAttributesReportable;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)toReadPrepareParams:(void *)a0;

@end
