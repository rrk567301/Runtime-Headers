@protocol CHSChronoWidgetServiceServer;

@interface CHSApplicationProcessStateChangeConsumer : NSObject

@property (readonly, nonatomic) id<CHSChronoWidgetServiceServer> server;

- (id)init;
- (void).cxx_destruct;
- (id)initWithServer:(id)a0;
- (void)applicationWithBundleIdentifierEnteredForeground:(id)a0;

@end
