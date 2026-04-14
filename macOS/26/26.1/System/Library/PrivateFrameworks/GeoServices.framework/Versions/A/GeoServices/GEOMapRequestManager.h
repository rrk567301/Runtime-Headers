@class geo_isolater, NSMutableSet;

@interface GEOMapRequestManager : NSObject {
    NSMutableSet *_requests;
    geo_isolater *_isolater;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)init;
- (void)requestComplete:(id)a0;
- (void)trackRequest:(id)a0;

@end
