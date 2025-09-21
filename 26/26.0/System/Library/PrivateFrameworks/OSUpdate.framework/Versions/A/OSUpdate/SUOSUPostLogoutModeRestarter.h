@class NSNumber, NSDictionary;

@interface SUOSUPostLogoutModeRestarter : NSObject

@property BOOL doItLater;
@property (retain) NSNumber *interruptResponseType;
@property (retain) NSDictionary *logoutOptions;

- (void).cxx_destruct;
- (void)_logoutFinishedWithSuccess:(BOOL)a0 infoDictionary:(struct __CFDictionary { } *)a1 queue:(id)a2 completion:(id /* block */)a3;
- (id)initWithShouldForceClose:(BOOL)a0 doItLater:(BOOL)a1;
- (void)restartIntoPostLogoutMode:(id /* block */)a0;

@end
