@class NSArray, NSDictionary, NSMutableDictionary, NSDate;

@interface PPTEvent : NSObject <NSCopying, NSSecureCoding> {
    NSMutableDictionary *metrics;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSDate *timestamp;
@property (readonly) NSArray *metricKeys;
@property (readonly) NSArray *metricValues;
@property (readonly) NSDictionary *metricKeysAndValues;
@property (readonly) unsigned long long count;

+ (id)eventWithTimestamp:(id)a0 andDictionary:(id)a1;
+ (id)eventWithTimestamp:(id)a0 andValues:(id)a1 forKeys:(id)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (long long)compare:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithEvent:(id)a0;
- (void)setMetricValue:(id)a0 forKey:(id)a1;
- (BOOL)isEqualToEvent:(id)a0;
- (id)JSONRepresentation;
- (id)metricValueForKey:(id)a0;
- (id)initWithTimestamp:(id)a0 andDictionary:(id)a1;
- (id)initWithTimestamp:(id)a0 andValues:(id)a1 forKeys:(id)a2;
- (void)removeMetricValueForKey:(id)a0;
- (id)metricValuesForKeys:(id)a0 notFoundMarker:(id)a1;

@end
