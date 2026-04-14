@class NSString, NSObject;
@protocol OS_nw_array;

@interface NWConcrete_nw_dns_cache_storage_canvas : NSObject <OS_nw_dns_cache_storage_canvas> {
    NSObject<OS_nw_array> *endpoints;
    BOOL dirty;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end
