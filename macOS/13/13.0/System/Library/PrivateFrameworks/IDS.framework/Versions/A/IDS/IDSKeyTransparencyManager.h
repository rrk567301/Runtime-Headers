@interface IDSKeyTransparencyManager : NSObject

- (void)getKeyTransparencyOptInEligiblityForApplication:(id)a0 withCompletion:(id /* block */)a1;
- (void)sendOptInUpdateForApplications:(id)a0 withCompletion:(id /* block */)a1;

@end
