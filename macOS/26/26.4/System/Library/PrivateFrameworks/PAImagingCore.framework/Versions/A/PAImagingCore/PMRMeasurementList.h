@interface PMRMeasurementList : NSObject <NSCopying> {
    void *_measurements;
}

- (unsigned long long)capacity;
- (id)drain;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (unsigned long long)count;
- (id)description;
- (void)dealloc;
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
