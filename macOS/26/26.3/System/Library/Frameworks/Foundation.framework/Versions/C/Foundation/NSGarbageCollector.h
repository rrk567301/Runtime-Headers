@interface NSGarbageCollector : NSObject

+ (id)defaultCollector;

- (BOOL)isEnabled;
- (void)enable;
- (void)disable;
- (struct _NSZone { } *)zone;
- (void)collectIfNeeded;
- (void)collectExhaustively;
- (void)disableCollectorForPointer:(const void *)a0;
- (void)enableCollectorForPointer:(const void *)a0;
- (BOOL)isCollecting;

@end
