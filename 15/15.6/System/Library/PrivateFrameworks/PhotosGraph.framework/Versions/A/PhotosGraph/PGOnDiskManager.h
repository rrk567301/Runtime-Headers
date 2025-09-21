@interface PGOnDiskManager : PGManager

+ (Class)graphClass;

- (void)closePersistentStore;
- (char)requiresReadOnly;

@end
