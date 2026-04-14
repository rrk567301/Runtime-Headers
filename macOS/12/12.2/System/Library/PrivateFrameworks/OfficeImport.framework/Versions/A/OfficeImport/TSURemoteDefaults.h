@interface TSURemoteDefaults : TSURemotePropertyList

+ (id)sharedDefaults;

- (id)objectForKey:(id)a0;
- (id)initInternal;
- (void)processPropertyList:(id)a0;
- (id)initWithRemoteURL:(id)a0 localURL:(id)a1;
- (void)registerDefaults;

@end
