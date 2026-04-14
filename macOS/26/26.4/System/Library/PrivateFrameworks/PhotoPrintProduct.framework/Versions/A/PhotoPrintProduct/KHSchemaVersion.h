@interface KHSchemaVersion : KHModel {
    long long _version;
}

- (long long)version;
- (void)setVersion:(long long)a0;
- (void)dealloc;
- (void)cacheVersion:(long long)a0;

@end
