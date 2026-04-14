@class NSString;

@interface HMAccessoryInfoWifiInfo : HMAccessoryInfo

@property (readonly) NSString *macAddress;
@property (readonly) NSString *networkSSID;

- (void).cxx_destruct;
- (id)protoPayload;
- (id)initWithProtoPayload:(id)a0;
- (id)initWithMacAddress:(id)a0 networkSSID:(id)a1 readOnly:(BOOL)a2;
- (id)initWithWifiNetworkInfo:(id)a0 readOnly:(BOOL)a1;
- (id)hmfWifiNetworkInfo;

@end
