@interface _NSConstantData : NSData

+ (id)alloc;

- (void)dealloc;
- (const void *)bytes;
- (id)retain;
- (unsigned long long)retainCount;
- (oneway void)release;
- (unsigned long long)length;

@end
