@class NSArray;

@interface CHIPPluginHAPDescriptionAtEndpoint : HMFObject

@property (retain, nonatomic) NSArray *categories;
@property (retain, nonatomic) NSArray *serviceDescriptions;

- (id)init;
- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)initWithType:(id)a0 serviceDescriptions:(id)a1;
- (id)getCategories;
- (id)getServiceDescriptions;

@end
