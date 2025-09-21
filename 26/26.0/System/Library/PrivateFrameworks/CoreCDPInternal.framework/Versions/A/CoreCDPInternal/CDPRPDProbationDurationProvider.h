@interface CDPRPDProbationDurationProvider : NSObject

+ (double)_defaultProbationDurationForUserType:(unsigned long long)a0;
+ (id)_serverProbationDurationForUserType:(unsigned long long)a0 rpdDurationConfigurations:(id)a1;
+ (unsigned long long)_userTypeForRecoveryContext:(id)a0;
+ (void)probationDurationForRecoveryContext:(id)a0 completion:(id /* block */)a1;

@end
