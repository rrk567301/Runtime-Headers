@interface _NSConstantData : NSData

+ (id)alloc;

- (id)retain;
- (const void *)bytes;
- (unsigned long long)retainCount;
- (unsigned long long)length;
- (oneway void)release;
- (void)dealloc;

@end
