@class NSArray, PXStoryStyleConfiguration;

@interface PXStoryStyleConfigurationList : NSObject

@property (readonly, copy, nonatomic) NSArray *autoEditStyleConfigurations;
@property (readonly, nonatomic) PXStoryStyleConfiguration *initialStyleConfiguration;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithAutoEditStyleConfigurations:(id)a0 initialStyleConfiguration:(id)a1;

@end
