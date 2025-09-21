@class _TtC18ActivityUIServices28SystemApertureMetricsRequest, ACUISActivityItemMetricsRequest;

@interface ACUISSystemApertureMetricsRequest : NSObject <NSCopying, NSSecureCoding> {
    _TtC18ActivityUIServices28SystemApertureMetricsRequest *_metricsRequest;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) struct CGSize { double x0; double x1; } obstructionSize;
@property (nonatomic) double obstructionTopMargin;
@property (copy, nonatomic) ACUISActivityItemMetricsRequest *expandedMetricsRequest;
@property (copy, nonatomic) ACUISActivityItemMetricsRequest *compactMetricsRequest;
@property (copy, nonatomic) ACUISActivityItemMetricsRequest *compactLeadingMetricsRequest;
@property (copy, nonatomic) ACUISActivityItemMetricsRequest *compactTrailingMetricsRequest;
@property (copy, nonatomic) ACUISActivityItemMetricsRequest *minimalMetricsRequest;

+ (id)new;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)_initWithMetricsRequest:(id)a0;
- (id)_systemApertureMetricsRequest;
- (id)initWithObstructionSize:(struct CGSize { double x0; double x1; })a0 expandedMetricsRequest:(id)a1 compactLeadingMetricsRequest:(id)a2 compactTrailingMetricsRequest:(id)a3 minimalMetricsRequest:(id)a4;
- (id)initWithObstructionSize:(struct CGSize { double x0; double x1; })a0 expandedMetricsRequest:(id)a1 compactMetricsRequest:(id)a2 minimalMetricsRequest:(id)a3;
- (id)initWithObstructionSize:(struct CGSize { double x0; double x1; })a0 obstructionTopMargin:(double)a1 expandedMetricsRequest:(id)a2 compactLeadingMetricsRequest:(id)a3 compactTrailingMetricsRequest:(id)a4 minimalMetricsRequest:(id)a5;

@end
