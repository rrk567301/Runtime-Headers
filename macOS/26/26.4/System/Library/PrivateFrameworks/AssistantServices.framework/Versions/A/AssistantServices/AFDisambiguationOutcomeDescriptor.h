@class NSIndexSet, NSString;

@interface AFDisambiguationOutcomeDescriptor : NSObject <AFIntelligenceFlowActionDescriptor>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSIndexSet *itemsIndices;
@property (nonatomic) unsigned long long behaviorOverrides;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
