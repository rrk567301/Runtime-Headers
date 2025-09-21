@class CDPContext;

@interface CDPDAccount : NSObject

@property (readonly, nonatomic) CDPContext *context;
@property (nonatomic) char hasDisabledKeychainExplicitly;

- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (char)isOTEnabledForContext:(id)a0;
- (char)isICDPEnabledForDSID:(id)a0 checkWithServer:(char)a1;
- (unsigned long long)recoveryContactCountForAltDSID:(id)a0;
- (char)_iCDPStatusFromNetworkUsing:(struct _PCSIdentitySetData { } *)a0 options:(struct __CFDictionary { } *)a1 error:(struct __CFError { } *)a2;

@end
