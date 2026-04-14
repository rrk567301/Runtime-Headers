@interface IEIntelligence : NSObject

@property (nonatomic) void *mIntelligence;

- (void)dealloc;
- (id)init;
- (BOOL)isActive;
- (BOOL)load:(id)a0;
- (void)setExtensions:(id)a0;
- (id)processEvent:(id)a0;
- (id)activeEvents;
- (id)getBuildVersion;
- (BOOL)willHandleEvent:(id)a0;
- (id)getFormatVersion;
- (id)getUndo;
- (BOOL)loadFromString:(id)a0;
- (id)activeIntents;
- (id)activeLocalEvents;
- (id)activeLocalIntents;
- (id)find:(id)a0 withId:(id)a1;
- (id)findInTemplateDir:(id)a0 withId:(id)a1;
- (id)getActiveEventsWithScope:(int)a0;
- (id)getActiveIntentsWithScope:(int)a0;
- (id)getConditions;
- (id)getEvents;
- (id)getExitValue;
- (id)getInputGroup:(id)a0;
- (id)getIntents;
- (id)getRemainingResponses;
- (id)getVariables;
- (id)goTo:(id)a0;
- (BOOL)hasActiveFallback;
- (BOOL)load:(id)a0 withFlowId:(id)a1;
- (BOOL)load:(id)a0 withId:(id)a1;
- (id)processActivity:(id)a0;
- (id)processDirectInvocation:(id)a0;
- (id)processIntent:(id)a0;
- (BOOL)setVariable:(id)a0 withValue:(id)a1;
- (id)startConversation;
- (BOOL)willHandleDirectInvocation:(id)a0;
- (BOOL)willHandleIntent:(id)a0;

@end
