@interface NEHotspotHelperResponse : NSObject

@property struct __CNPluginResponse { } *response;

- (void)dealloc;
- (id)description;
- (void)setNetwork:(id)a0;
- (id)initWithResponse:(struct __CNPluginResponse { } *)a0;
- (void)setNetworkList:(id)a0;
- (void)deliver;

@end
