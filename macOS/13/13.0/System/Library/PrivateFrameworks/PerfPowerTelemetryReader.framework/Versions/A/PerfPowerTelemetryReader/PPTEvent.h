@class NSString, NSDictionary, NSArray, NSDate, NSMutableDictionary;

@interface PPTEvent : NSObject <NSCopying, NSSecureCoding> {
    NSMutableDictionary *_metrics;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSDate *timestamp;
@property (readonly) unsigned long long count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSDictionary *dictionary;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSArray *metricKeys;
@property (readonly, copy) NSArray *metricValues;
@property (readonly, copy) NSDictionary *metricKeysAndValues;

+ (id)eventWithTimestamp:(id)a0 andValues:(id)a1 forKeys:(id)a2;
+ (id)eventWithTimestamp:(id)a0 andDictionary:(id)a1;

- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (long long)compare:(id)a0;
- (void).cxx_destruct;
- (id)valueForKey:(id)a0;
- (id)valueForUndefinedKey:(id)a0;
- (id)initWithEvent:(id)a0;
- (BOOL)isEqualToEvent:(id)a0;
- (id)JSONRepresentation;
- (id)initWithTimestamp:(id)a0 andValues:(id)a1 forKeys:(id)a2;
- (id)initWithTimestamp:(id)a0 andDictionary:(id)a1;
- (id)metricValueForKey:(id)a0;
- (id)metricValuesForKeys:(id)a0 notFoundMarker:(id)a1;

@end
