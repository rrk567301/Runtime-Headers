@interface _NSConstantData : NSData

+ (id)alloc;

- (const void *)bytes;
- (unsigned long long)length;
- (id)retain;
- (oneway void)release;
- (void)dealloc;
- (unsigned long long)retainCount;

@end
