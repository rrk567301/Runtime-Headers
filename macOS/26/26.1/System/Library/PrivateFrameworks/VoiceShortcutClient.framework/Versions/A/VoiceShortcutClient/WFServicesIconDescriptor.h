@class WFServicesWorkflow;

@interface WFServicesIconDescriptor : NSObject <NSCopying>

@property (readonly, nonatomic) WFServicesWorkflow *servicesWorkflow;
@property (readonly, nonatomic) struct CGSize { double width; double height; } size;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithServicesWorkflow:(id)a0 ofSize:(struct CGSize { double x0; double x1; })a1;

@end
