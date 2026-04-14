@class NSString;

@interface KHTreatmentClass : KHModel {
    NSString *_name;
    long long _active;
}

- (void)setActive:(long long)a0;
- (long long)active;
- (void)setName:(id)a0;
- (void)dealloc;
- (id)name;
- (void)cacheActive:(long long)a0;
- (void)cacheName:(id)a0;

@end
