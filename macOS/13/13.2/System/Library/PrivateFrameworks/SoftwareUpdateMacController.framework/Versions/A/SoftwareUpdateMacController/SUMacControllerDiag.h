@interface SUMacControllerDiag : NSObject

+ (id)sharedDiag;
+ (void)sharedDiagsDumpStateWithReason:(id)a0 dumpingTo:(long long)a1 clearingAfter:(BOOL)a2;
+ (id)messageFromError:(id)a0;

@end
