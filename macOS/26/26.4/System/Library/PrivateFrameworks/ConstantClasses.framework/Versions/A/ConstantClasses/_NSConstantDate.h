@interface _NSConstantDate : NSDate

+ (id)alloc;

- (id)retain;
- (double)timeIntervalSinceReferenceDate;
- (oneway void)release;
- (void)dealloc;
- (unsigned long long)retainCount;

@end
