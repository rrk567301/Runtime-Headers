@class HMDValueTransformer, NSAttributeDescription;

@interface HMDAttributeCodingDescription : HMDPropertyCodingDescription {
    char _shouldInline;
    HMDValueTransformer *_transformer;
}

@property (readonly) NSAttributeDescription *attribute;
@property (readonly) HMDValueTransformer *transformer;
@property (readonly) char shouldInline;

- (void).cxx_destruct;

@end
