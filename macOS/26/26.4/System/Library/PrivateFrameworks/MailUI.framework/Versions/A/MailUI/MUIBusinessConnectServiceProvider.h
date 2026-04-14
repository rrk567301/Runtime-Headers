@class EMMessageRepository, BCSBusinessQueryService;

@interface MUIBusinessConnectServiceProvider : NSObject <MUIBusinessServiceProvider>

@property (nonatomic, readonly) BCSBusinessQueryService *service;
@property (nonatomic, readonly) EMMessageRepository *messageRepository;

- (void).cxx_destruct;
- (id)init;
- (void)businessLogoForContext:(id)a0 handler:(id /* block */)a1;
- (id)initWithMessageRepository:(id)a0;

@end
