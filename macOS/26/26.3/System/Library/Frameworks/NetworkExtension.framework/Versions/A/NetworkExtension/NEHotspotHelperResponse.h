@interface NEHotspotHelperResponse : NSObject {
    struct __CNPluginResponse { } *_response;
}

- (id)description;
- (void)setNetwork:(id)a0;
- (void)dealloc;
- (void)deliver;
- (void)deliverInternal;
- (void)setNetworkList:(id)a0;

@end
