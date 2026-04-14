@interface _NSConstantDate : NSDate

+ (id)alloc;

- (id)retain;
- (oneway void)release;
- (unsigned long long)retainCount;
- (void)dealloc;
- (double)timeIntervalSinceReferenceDate;

@end
