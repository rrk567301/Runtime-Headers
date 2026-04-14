@interface KHSchemaVersion : KHModel {
    long long _version;
}

- (void)setVersion:(long long)a0;
- (void)dealloc;
- (long long)version;
- (void)cacheVersion:(long long)a0;

@end
