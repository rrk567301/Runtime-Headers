@interface SUMacControllerDiag : NSObject

+ (id)messageFromError:(id)a0;
+ (id)sharedDiag;
+ (void)sharedDiagsDumpStateWithReason:(id)a0 dumpingTo:(long long)a1 clearingAfter:(char)a2;

@end
