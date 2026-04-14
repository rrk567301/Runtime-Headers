@interface _NSConstantData : NSData

+ (id)alloc;

- (id)retain;
- (oneway void)release;
- (void)dealloc;
- (unsigned long long)retainCount;
- (unsigned long long)length;
- (const void *)bytes;

@end
