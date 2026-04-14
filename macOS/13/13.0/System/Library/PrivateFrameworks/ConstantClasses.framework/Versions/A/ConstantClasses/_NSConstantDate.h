@interface _NSConstantDate : NSDate

+ (id)alloc;

- (id)retain;
- (oneway void)release;
- (void)dealloc;
- (unsigned long long)retainCount;
- (double)timeIntervalSinceReferenceDate;

@end
