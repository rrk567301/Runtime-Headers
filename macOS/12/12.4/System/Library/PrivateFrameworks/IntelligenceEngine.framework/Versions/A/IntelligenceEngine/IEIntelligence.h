@interface IEIntelligence : NSObject

@property (nonatomic) struct TtIntelligence { struct Impl *x0; } *mIntelligence;

- (void)dealloc;
- (id)init;
- (BOOL)isActive;
- (void)load:(id)a0;
- (id)startConversation;
- (id)processIntent:(id)a0;
- (BOOL)willHandleIntent:(id)a0;
- (id)activeIntents;

@end
