@class NSString, TransparencyApplication;

@interface KTOptInManager : NSObject

@property (retain) TransparencyApplication *application;
@property (readonly) NSString *applicationIdentifier;

+ (id)notificationKeyForApplication:(id)a0;

- (void).cxx_destruct;
- (id)initWithApplication:(id)a0;
- (BOOL)getOptInState;
- (void)getOptInStateWithSync:(id /* block */)a0;
- (void)setOptInState:(BOOL)a0 completionBlock:(id /* block */)a1;
- (void)setOptInState:(BOOL)a0 detailedCompletionBlock:(id /* block */)a1;

@end
