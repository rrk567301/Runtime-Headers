@class NSArray, PXStoryStyleConfiguration;

@interface PXStoryStyleConfigurationList : NSObject

@property (readonly, copy, nonatomic) NSArray *autoEditStyleConfigurations;
@property (readonly, nonatomic) PXStoryStyleConfiguration *initialStyleConfiguration;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)initWithAutoEditStyleConfigurations:(id)a0 initialStyleConfiguration:(id)a1;

@end
