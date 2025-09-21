@protocol CLPCPolicyAccess;

@interface CLPCPolicyClient : CLPCUserClient <CLPCPolicyAccess> {
    struct LPGMInfo { struct ResponseInfo { unsigned int id; unsigned short version; unsigned short reserved; unsigned long long size; } info; unsigned long long package_energy_nj; unsigned long long lpgm_timestamp; float lpgm_target; } previous_lpgm_info;
    id<CLPCPolicyAccess> clpc_policy_client;
}

- (id).cxx_construct;
- (id)init:(id *)a0;
- (void).cxx_destruct;
- (BOOL)isLowPowerModeCandidate:(unsigned long long)a0 error:(id *)a1;
- (BOOL)setCLPCTrialID:(unsigned long long)a0 error:(id *)a1;
- (BOOL)setGameMode:(BOOL)a0 options:(unsigned long long)a1 error:(id *)a2;

@end
