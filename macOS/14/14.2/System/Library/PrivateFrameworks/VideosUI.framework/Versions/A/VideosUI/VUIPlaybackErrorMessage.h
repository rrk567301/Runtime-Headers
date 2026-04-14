@interface VUIPlaybackErrorMessage : NSObject

+ (id)sharedInstance;

- (id)_getLanguageCode;
- (id)_getSessionInfoFor:(id)a0;
- (void)getLocalizedErrorMessageFor:(id)a0 withError:(id)a1 completion:(id /* block */)a2;

@end
