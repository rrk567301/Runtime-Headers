@interface _CDLogging : NSObject

+ (id)psBackgroundProcessingChannel;
+ (id)mediaAnalysisChannel;
+ (id)admissionCheckChannel;
+ (id)autoSUChannel;
+ (id)communicatorChannel;
+ (id)contextChannel;
+ (id)dataCollectionChannel;
+ (id)descriptionOfArray:(id)a0 redacted:(BOOL)a1;
+ (id)descriptionOfObject:(id)a0 redacted:(BOOL)a1;
+ (id)instrumentationChannel;
+ (id)interactionChannel;
+ (id)interactionSignpost;
+ (id)knowledgeChannel;
+ (id)knowledgeSignpost;
+ (id)spotlightReceiverChannel;
+ (id)syncChannel;

- (id)redactedDescription;

@end
