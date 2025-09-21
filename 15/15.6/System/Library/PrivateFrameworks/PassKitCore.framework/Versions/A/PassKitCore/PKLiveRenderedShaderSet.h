@class NSString;

@interface PKLiveRenderedShaderSet : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *geometryEntryPointShader;
@property (readonly, copy, nonatomic) NSString *surfaceEntryPointShader;
@property (readonly, copy, nonatomic) NSString *lightingModelEntryPointShader;
@property (readonly, copy, nonatomic) NSString *fragmentEntryPointShader;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDataAccessor:(id)a0 suffix:(id)a1;

@end
