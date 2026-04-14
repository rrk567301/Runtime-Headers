@class NSSet;

@interface WKModalContainerClassifierInput : NSObject <MLFeatureProvider> {
    struct RetainPtr<NSString> { void *m_ptr; } _canonicalInput;
}

@property (readonly, nonatomic) NSSet *featureNames;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)featureValueForName:(id)a0;
- (id)initWithTokenizer:(id)a0 rawInput:(id)a1;

@end
