@class geo_isolater, NSMutableSet;

@interface GEOMapRequestManager : NSObject {
    NSMutableSet *_requests;
    geo_isolater *_isolater;
}

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)requestComplete:(id)a0;
- (void)trackRequest:(id)a0;

@end
