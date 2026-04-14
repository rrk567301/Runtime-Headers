@interface _NSConstantDate : NSDate

+ (id)alloc;

- (id)retain;
- (double)timeIntervalSinceReferenceDate;
- (unsigned long long)retainCount;
- (oneway void)release;
- (void)dealloc;

@end
