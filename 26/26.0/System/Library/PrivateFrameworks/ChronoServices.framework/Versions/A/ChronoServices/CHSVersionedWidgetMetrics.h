@interface CHSVersionedWidgetMetrics : CHSWidgetMetrics {
    unsigned long long _filenameVersion;
}

@property (readonly, copy, nonatomic) CHSVersionedWidgetMetrics *priorVersionedWidgetMetrics;

+ (unsigned long long)currentWidgetMetricsVersion;

- (long long)compare:(id)a0;
- (id)_stringKeyRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithMetrics:(id)a0 version:(unsigned long long)a1;

@end
