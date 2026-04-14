@interface NSGarbageCollector : NSObject

+ (id)defaultCollector;

- (struct _NSZone { } *)zone;
- (BOOL)isEnabled;
- (void)disable;
- (void)enable;
- (BOOL)isCollecting;
- (void)collectIfNeeded;
- (void)collectExhaustively;
- (void)disableCollectorForPointer:(const void *)a0;
- (void)enableCollectorForPointer:(const void *)a0;

@end
