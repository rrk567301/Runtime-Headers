@interface PMRMeasurementList : NSObject <NSCopying> {
    void *_measurements;
}

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)count;
- (id)drain;
- (unsigned long long)capacity;
- (id)measurements;
- (id)initWithMeasurements:(id)a0;
- (id)initWithBackingVector:(void *)a0;
- (void)eachWithBlock:(id /* block */)a0;
- (void)appendMeasurement:(id)a0;
- (void)appendMeasurements:(id)a0;
- (void)appendMeasurementList:(id)a0;
- (void)reserve:(unsigned long long)a0;
- (id)dataSetForKey:(id)a0;
- (BOOL)isEqualToMeasurementList:(id)a0;

@end
