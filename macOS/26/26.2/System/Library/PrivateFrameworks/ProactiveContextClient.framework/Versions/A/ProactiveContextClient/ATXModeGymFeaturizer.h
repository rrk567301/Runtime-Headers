@class ATXPOICategoryVisitDataProvider, NSString;
@protocol ATXModeFeaturizerDelegate;

@interface ATXModeGymFeaturizer : NSObject <ATXModeFeaturizer>

@property (retain, nonatomic) ATXPOICategoryVisitDataProvider *dataProvider;
@property (weak, nonatomic) id<ATXModeFeaturizerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)provideFeatures;
- (void)beginListening;
- (void)stopListening;
- (void).cxx_destruct;
- (void)handleChange;
- (id)init;

@end
