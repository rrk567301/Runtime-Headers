@interface NEHotspotHelperResponse : NSObject {
    struct __CNPluginResponse { } *_response;
}

- (void)dealloc;
- (id)description;
- (void)setNetwork:(id)a0;
- (void)setNetworkList:(id)a0;
- (void)deliver;

@end
