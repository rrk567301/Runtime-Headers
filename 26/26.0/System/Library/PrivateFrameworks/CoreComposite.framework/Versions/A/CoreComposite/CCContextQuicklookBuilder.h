@class NSMutableDictionary;

@interface CCContextQuicklookBuilder : CCQuicklookBuilder {
    NSMutableDictionary *_services;
    NSMutableDictionary *_descriptors;
    NSMutableDictionary *_lanes;
}

- (void).cxx_destruct;
- (id)toHTML:(id)a0;
- (void)visit:(id)a0 name:(id)a1;

@end
