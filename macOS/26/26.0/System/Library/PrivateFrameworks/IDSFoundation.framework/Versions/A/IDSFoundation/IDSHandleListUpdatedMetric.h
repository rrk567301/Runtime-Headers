@class NSString, NSDictionary;

@interface IDSHandleListUpdatedMetric : NSObject <CUTCoreAnalyticsMetric>

@property (readonly, nonatomic) NSString *service;
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithService:(id)a0;
- (void).cxx_destruct;

@end
