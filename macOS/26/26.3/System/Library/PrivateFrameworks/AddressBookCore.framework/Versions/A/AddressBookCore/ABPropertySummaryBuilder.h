@class NSString, NSMutableDictionary;

@interface ABPropertySummaryBuilder : NSObject <ABPropertySummaryBuilding> {
    NSMutableDictionary *_builders;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)buildSummaryForValue:(id)a0 property:(id)a1;
- (id)builderForProperty:(id)a0;
- (id)makeBuilderForProperty:(id)a0;

@end
