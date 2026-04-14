@class NSNumber, NSDictionary, NSString;

@interface IDSOffTheGridModeMetric : NSObject <CUTCoreAnalyticsMetric>

@property (readonly, nonatomic) NSNumber *previousMode;
@property (readonly, nonatomic) NSNumber *currentMode;
@property (readonly, nonatomic) BOOL previouslyConnected;
@property (readonly, nonatomic) BOOL currentlyConnected;
@property (readonly, nonatomic) NSNumber *duration;
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithPreviousMode:(id)a0 currentMode:(id)a1 previouslyConnected:(BOOL)a2 currentlyConnected:(BOOL)a3 duration:(id)a4;

@end
