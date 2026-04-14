@interface IEIntelligence : NSObject

@property (nonatomic) struct Intelligence { struct Impl *x0; } *mIntelligence;

- (void)dealloc;
- (id)init;
- (BOOL)isActive;
- (BOOL)load:(id)a0;
- (id)getBuildVersion;
- (id)getFormatVersion;
- (BOOL)load:(id)a0 withId:(id)a1;
- (id)find:(id)a0 withId:(id)a1;
- (id)startConversation;
- (id)processIntent:(id)a0;
- (id)processActivity:(id)a0;
- (id)getRemainingResponses;
- (id)goTo:(id)a0;
- (BOOL)willHandleIntent:(id)a0;
- (id)getActiveIntentsWithScope:(int)a0;
- (id)activeIntents;
- (id)activeLocalIntents;
- (id)getVariables;
- (BOOL)setVariable:(id)a0 withValue:(id)a1;
- (id)getConditions;

@end
