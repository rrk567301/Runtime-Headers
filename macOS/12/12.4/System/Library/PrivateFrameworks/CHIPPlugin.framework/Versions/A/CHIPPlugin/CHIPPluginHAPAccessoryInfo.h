@class NSMutableDictionary;

@interface CHIPPluginHAPAccessoryInfo : HMFObject

@property (retain, nonatomic) NSMutableDictionary *accessoryInfoDictionary;

- (id)init;
- (void).cxx_destruct;
- (id)initWithType:(id)a0;
- (id)attributeDescriptions;
- (id)getAccessoryInfoForEndpoint:(id)a0;
- (id)getAccessoryInfoDictionary;
- (id)getCategoriesForEndpoint:(id)a0;
- (id)getServiceDescriptionsForEndpoint:(id)a0;
- (void)setAccessoryInfo:(id)a0 forEndpoint:(id)a1;

@end
