@interface MCMCommandFetchPersonaUniqueStrings : MCMCommand

+ (Class)incomingMessageClass;
+ (unsigned long long)command;

- (BOOL)preflightClientAllowed;
- (void)execute;

@end
