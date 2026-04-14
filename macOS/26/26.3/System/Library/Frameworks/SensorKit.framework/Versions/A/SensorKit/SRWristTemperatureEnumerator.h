@class HAWristTemperatureEnumerator;

@interface SRWristTemperatureEnumerator : NSEnumerator {
    HAWristTemperatureEnumerator *_enumerableHAWristTemperature;
}

+ (id)new;

- (id)init;
- (void)dealloc;
- (id)initWithHAWristTemperatureEnumerator:(id)a0;

@end
