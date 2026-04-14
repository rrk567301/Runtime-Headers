@interface SUMacControllerDiag : NSObject

+ (id)sharedDiag;
+ (id)messageFromError:(id)a0;
+ (void)sharedDiagsDumpStateWithReason:(id)a0 dumpingTo:(long long)a1 clearingAfter:(BOOL)a2;

@end
