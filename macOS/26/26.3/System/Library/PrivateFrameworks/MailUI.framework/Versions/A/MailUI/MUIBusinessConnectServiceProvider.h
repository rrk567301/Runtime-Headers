@class EMMessageRepository, BCSBusinessQueryService;

@interface MUIBusinessConnectServiceProvider : NSObject <MUIBusinessServiceProvider>

@property (nonatomic, readonly) BCSBusinessQueryService *service;
@property (nonatomic, readonly) EMMessageRepository *messageRepository;

- (id)init;
- (void).cxx_destruct;
- (void)businessLogoForContext:(id)a0 handler:(id /* block */)a1;
- (id)initWithMessageRepository:(id)a0;

@end
