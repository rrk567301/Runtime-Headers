@interface NSGarbageCollector : NSObject

+ (id)defaultCollector;

- (struct _NSZone { } *)zone;
- (void)enable;
- (void)disable;
- (BOOL)isEnabled;
- (void)collectIfNeeded;
- (void)collectExhaustively;
- (void)disableCollectorForPointer:(const void *)a0;
- (void)enableCollectorForPointer:(const void *)a0;
- (BOOL)isCollecting;

@end
