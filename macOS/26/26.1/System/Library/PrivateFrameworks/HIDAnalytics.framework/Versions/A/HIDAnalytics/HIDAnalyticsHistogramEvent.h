@class HIDAnalyticsHistogramEventField;

@interface HIDAnalyticsHistogramEvent : HIDAnalyticsEvent {
    HIDAnalyticsHistogramEventField *_field;
    BOOL _isUpdated;
}

- (void)addField:(id)a0;
- (void)setValue:(id)a0;
- (void)setIntegerValue:(unsigned long long)a0;
- (id)initWithAttributes:(id)a0 description:(id)a1;
- (id)value;
- (void).cxx_destruct;
- (void)addHistogramFieldWithSegments:(id)a0 segments:(struct _HIDAnalyticsHistogramSegmentConfig { unsigned char x0; unsigned char x1; unsigned char x2; unsigned long long x3; } *)a1 count:(long long)a2;
- (void)setIntegerValue:(unsigned long long)a0 forField:(id)a1;

@end
