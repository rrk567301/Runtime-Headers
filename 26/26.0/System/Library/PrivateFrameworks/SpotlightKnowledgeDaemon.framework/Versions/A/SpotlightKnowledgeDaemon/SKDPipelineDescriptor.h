@class NSString, NSArray, SKDPipelineSetDescription, NSNumber;

@interface SKDPipelineDescriptor : NSObject {
    SKDPipelineSetDescription *_setDescription;
    NSArray *_processorNames;
}

@property (readonly, nonatomic) SKDPipelineSetDescription *setDescription;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSNumber *version;
@property (readonly, nonatomic) NSArray *requiredBundles;
@property (readonly, nonatomic) NSArray *excludedBundles;
@property (readonly, nonatomic) NSArray *requiredProtectionClasses;
@property (readonly, nonatomic) NSArray *excludedProtectionClasses;
@property (readonly, nonatomic) NSArray *requiredAttributes;
@property (readonly, nonatomic) NSArray *excludedAttributes;
@property (readonly, nonatomic) NSArray *processedAttributes;
@property (readonly, nonatomic) NSArray *processorNames;
@property (readonly, nonatomic) BOOL enabled;

+ (id)descriptorFromSetDescription:(id)a0 processorNames:(id)a1;

- (id)description;
- (void).cxx_destruct;
- (id)initWithSetDescription:(id)a0 processorNames:(id)a1;

@end
