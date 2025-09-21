@class NSArray, NSString, SKDPipelineDescriptor;

@interface SKDPipeline : NSObject

@property (readonly, nonatomic) SKDPipelineDescriptor *descriptor;
@property (readonly, nonatomic) NSArray *processors;
@property (readonly, nonatomic) NSArray *fetchAttributes;
@property (readonly, nonatomic) NSArray *requiredAttributes;
@property (readonly, nonatomic) NSArray *processedAttributes;
@property (readonly, nonatomic) NSString *versionValue;
@property (readonly, nonatomic) NSString *versionAttribute;
@property (readonly, nonatomic) NSString *errorAttribute;
@property (readonly, nonatomic) NSString *needsProcessingAttribute;
@property (readonly, nonatomic) NSString *supportedQuery;
@property (nonatomic) BOOL canRun;

- (id)description;
- (void).cxx_destruct;
- (id)initWithDescriptor:(id)a0 processors:(id)a1;
- (id)supportedSetQuery;
- (BOOL)supportsRecord:(id)a0 bundleID:(id)a1;

@end
