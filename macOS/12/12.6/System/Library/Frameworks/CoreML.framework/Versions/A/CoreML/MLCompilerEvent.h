@class NSString, NSDictionary;

@interface MLCompilerEvent : NSObject <CUTCoreAnalyticsMetric>

@property (copy, nonatomic) NSString *modelName;
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;

@end
