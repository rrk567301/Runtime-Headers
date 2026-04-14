@interface _NSConstantData : NSData

+ (id)alloc;

- (id)retain;
- (oneway void)release;
- (unsigned long long)retainCount;
- (void)dealloc;
- (unsigned long long)length;
- (const void *)bytes;

@end
