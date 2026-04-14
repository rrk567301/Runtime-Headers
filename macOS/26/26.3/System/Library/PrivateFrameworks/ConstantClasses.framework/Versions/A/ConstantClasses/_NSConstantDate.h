@interface _NSConstantDate : NSDate

+ (id)alloc;

- (unsigned long long)retainCount;
- (id)retain;
- (double)timeIntervalSinceReferenceDate;
- (void)dealloc;
- (oneway void)release;

@end
