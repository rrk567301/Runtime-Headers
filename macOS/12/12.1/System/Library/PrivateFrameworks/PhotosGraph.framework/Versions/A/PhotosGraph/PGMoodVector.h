@interface PGMoodVector : NSObject <NSCopying> {
    double _vector[10];
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)init;
- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (void)setObject:(id)a0 atIndexedSubscript:(unsigned long long)a1;
- (id)initWithArray:(id)a0;
- (void)enumerateWithBlock:(id /* block */)a0;
- (void)normalize;
- (double)sum;
- (void)addValue:(double)a0 forMoods:(unsigned long long)a1;
- (void)addValue:(double)a0 forMood:(unsigned long long)a1;
- (double)valueForMood:(unsigned long long)a0;
- (void)setValue:(double)a0 forMood:(unsigned long long)a1;
- (void)multiplyByWeight:(double)a0 forMood:(unsigned long long)a1;
- (void)addMoodVector:(id)a0;
- (void)substractMoodVector:(id)a0;
- (void)multiplyMoodVector:(id)a0;
- (void)multiplyByWeight:(double)a0;
- (void)filterWithMoods:(unsigned long long)a0;
- (unsigned long long)moodsWithThreshold:(double)a0;
- (unsigned long long)weightedRandomMoodWithSeed:(unsigned long long)a0;
- (id)moodArray;

@end
