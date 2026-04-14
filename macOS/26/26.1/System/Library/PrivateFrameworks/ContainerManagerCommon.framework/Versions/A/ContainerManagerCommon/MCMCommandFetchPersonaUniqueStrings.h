@interface MCMCommandFetchPersonaUniqueStrings : MCMCommand

+ (Class)incomingMessageClass;
+ (unsigned long long)command;

- (void)execute;
- (BOOL)preflightClientAllowed;

@end
