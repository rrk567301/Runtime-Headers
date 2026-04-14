@interface KHSchemaVersion : KHModel {
    long long _version;
}

- (void)setVersion:(long long)a0;
- (long long)version;
- (void)dealloc;
- (void)cacheVersion:(long long)a0;

@end
