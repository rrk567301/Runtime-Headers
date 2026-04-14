@interface NSGarbageCollector : NSObject

+ (id)defaultCollector;

- (void)enable;
- (void)disable;
- (BOOL)isEnabled;
- (struct _NSZone { } *)zone;
- (void)collectIfNeeded;
- (void)collectExhaustively;
- (void)disableCollectorForPointer:(const void *)a0;
- (void)enableCollectorForPointer:(const void *)a0;
- (BOOL)isCollecting;

@end
