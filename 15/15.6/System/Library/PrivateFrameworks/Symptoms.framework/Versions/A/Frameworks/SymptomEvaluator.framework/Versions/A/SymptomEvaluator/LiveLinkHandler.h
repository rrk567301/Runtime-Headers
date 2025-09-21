@class NSString;

@interface LiveLinkHandler : NSObject <ConfigurableObjectProtocol, SymptomAdditionalProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)configureClass:(id)a0;

- (int)configureInstance:(id)a0;
- (char)excludeLocalFlowsTrackingOnInterface:(id)a0;
- (char)includeLocalFlowsTrackingOnInterface:(id)a0;
- (BOOL)noteSymptom:(id)a0;
- (char)startTrackingLiveLinkOnInterface:(id)a0;
- (char)stopTrackingLiveLinkOnInterface:(id)a0;

@end
