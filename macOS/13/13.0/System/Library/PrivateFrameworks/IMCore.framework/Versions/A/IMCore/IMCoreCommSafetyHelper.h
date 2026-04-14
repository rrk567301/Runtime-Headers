@interface IMCoreCommSafetyHelper : NSObject

+ (id)sharedInstance;

- (void)getOpenChatURLWith:(id /* block */)a0;
- (id)_urlFromAddressList:(id)a0;

@end
