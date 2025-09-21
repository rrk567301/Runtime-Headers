@class EMMessageRepository, NSString;

@interface MUIMessageRepositoryCategoryProvider : NSObject <MUICategoryProvider>

@property (retain, nonatomic) EMMessageRepository *messageRepository;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)categoryForContext:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithMessageRepository:(id)a0;

@end
