@interface _NSConstantData : NSData

+ (id)alloc;

- (const void *)bytes;
- (unsigned long long)length;
- (unsigned long long)retainCount;
- (id)retain;
- (void)dealloc;
- (oneway void)release;

@end
