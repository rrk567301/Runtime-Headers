@class NSArray;

@interface RMUIConfigurationViewModels : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *profileViewModels;
@property (readonly, nonatomic) NSArray *pluginSectionViewModels;
@property (readonly, nonatomic) NSArray *pluginViewModels;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithProfileViewModels:(id)a0 pluginSectionViewModels:(id)a1 pluginViewModels:(id)a2;

@end
