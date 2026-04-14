@class WFServicesWorkflow;

@interface WFServicesIconDescriptor : NSObject

@property (readonly, nonatomic) WFServicesWorkflow *servicesWorkflow;
@property (readonly, nonatomic) struct CGSize { double width; double height; } size;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithServicesWorkflow:(id)a0 ofSize:(struct CGSize { double x0; double x1; })a1;

@end
