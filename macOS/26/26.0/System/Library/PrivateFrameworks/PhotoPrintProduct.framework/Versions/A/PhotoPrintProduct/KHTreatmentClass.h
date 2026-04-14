@class NSString;

@interface KHTreatmentClass : KHModel {
    NSString *_name;
    long long _active;
}

- (void)dealloc;
- (long long)active;
- (void)setActive:(long long)a0;
- (void)setName:(id)a0;
- (id)name;
- (void)cacheActive:(long long)a0;
- (void)cacheName:(id)a0;

@end
