@class NSString, NSDictionary, NSMutableDictionary;

@interface HIDAnalyticsEvent : NSObject {
    NSMutableDictionary *_fields;
    char _isUpdated;
}

@property (retain) NSString *name;
@property (retain) NSDictionary *desc;
@property char isLogged;

- (id)description;
- (void).cxx_destruct;
- (id)value;
- (void)activate;
- (void)setStringValue:(id)a0;
- (void)cancel;
- (void)setValue:(id)a0;
- (void)setIntegerValue:(unsigned long long)a0;
- (void)addField:(id)a0;
- (void)setIntegerValue:(unsigned long long)a0 forField:(id)a1;
- (id)initWithAttributes:(id)a0 description:(id)a1;
- (void)addHistogramFieldWithSegments:(id)a0 segments:(struct _HIDAnalyticsHistogramSegmentConfig { unsigned char x0; unsigned char x1; unsigned char x2; unsigned long long x3; } *)a1 count:(long long)a2;
- (void)setStringValue:(id)a0 forField:(id)a1;

@end
