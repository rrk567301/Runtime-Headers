@interface NEHotspotHelperResponse : NSObject {
    struct __CNPluginResponse { } *_response;
}

- (void)dealloc;
- (void)setNetwork:(id)a0;
- (id)description;
- (void)deliver;
- (void)deliverInternal;
- (void)setNetworkList:(id)a0;

@end
