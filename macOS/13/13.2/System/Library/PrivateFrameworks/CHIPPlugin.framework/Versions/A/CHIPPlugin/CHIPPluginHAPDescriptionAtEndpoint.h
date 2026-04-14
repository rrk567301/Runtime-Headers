@class NSArray, NSString;

@interface CHIPPluginHAPDescriptionAtEndpoint : HMFObject

@property (retain, nonatomic) NSArray *categories;
@property (retain, nonatomic) NSArray *serviceDescriptions;
@property (readonly) NSString *name;
@property (readonly) NSArray *partsList;
@property (readonly) NSArray *fixedLabels;

- (id)init;
- (void).cxx_destruct;
- (id)getName;
- (id)attributeDescriptions;
- (id)initWithType:(id)a0 serviceDescriptions:(id)a1;
- (id)initWithType:(id)a0 serviceDescriptions:(id)a1 name:(id)a2 partsList:(id)a3 fixedLabels:(id)a4;
- (id)getCategories;
- (id)getServiceDescriptions;
- (id)getPartsList;
- (id)getFixedLabels;

@end
