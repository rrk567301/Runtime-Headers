@interface NSGarbageCollector : NSObject

+ (id)defaultCollector;

- (void)disable;
- (void)enable;
- (struct _NSZone { } *)zone;
- (BOOL)isEnabled;
- (void)collectIfNeeded;
- (void)collectExhaustively;
- (void)disableCollectorForPointer:(const void *)a0;
- (void)enableCollectorForPointer:(const void *)a0;
- (BOOL)isCollecting;

@end
