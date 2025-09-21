@class NSArray;

@interface FASharedServicesResponse : AAResponse

@property (readonly, nonatomic) NSArray *services;
@property (readonly, nonatomic) NSArray *serviceGroups;
@property (readonly, nonatomic) char locationAllowed;

- (void).cxx_destruct;
- (id)initWithHTTPResponse:(id)a0 data:(id)a1;
- (void)_initializeServicesMapWithGroups:(id)a0 andServices:(id)a1;
- (void)_setLocationAllowedWithLocation:(char)a0;
- (void)_sharedServicesWithNoGrouping:(id)a0;

@end
