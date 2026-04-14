@class NSString;

@interface KHTreatmentClass : KHModel {
    NSString *_name;
    long long _active;
}

- (long long)active;
- (void)setActive:(long long)a0;
- (id)name;
- (void)dealloc;
- (void)setName:(id)a0;
- (void)cacheActive:(long long)a0;
- (void)cacheName:(id)a0;

@end
