@class NSNumber;

@interface MTRReadParams : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSNumber *fabricFiltered;
@property (nonatomic, getter=shouldFilterByFabric) char filterByFabric;
@property (copy, nonatomic) NSNumber *minEventNumber;
@property (nonatomic, getter=shouldAssumeUnknownAttributesReportable) char assumeUnknownAttributesReportable;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)toReadPrepareParams:(void *)a0;

@end
