@interface PMRMeasurementList : NSObject <NSCopying> {
    void *_measurements;
}

- (unsigned long long)capacity;
- (id)drain;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)count;
- (id)init;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)measurements;
- (void)appendMeasurement:(id)a0;
- (void)appendMeasurementList:(id)a0;
- (void)appendMeasurements:(id)a0;
- (id)dataSetForKey:(id)a0;
- (void)eachWithBlock:(id /* block */)a0;
- (id)initWithBackingVector:(void *)a0;
- (id)initWithMeasurements:(id)a0;
- (BOOL)isEqualToMeasurementList:(id)a0;
- (void)reserve:(unsigned long long)a0;

@end
