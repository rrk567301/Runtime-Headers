@class CDPContext;

@interface CDPDAccount : NSObject

@property (readonly, nonatomic) CDPContext *context;
@property (nonatomic) BOOL hasDisabledKeychainExplicitly;

- (id)initWithContext:(id)a0;
- (BOOL)isICDPEnabledForDSID:(id)a0 checkWithServer:(BOOL)a1;
- (unsigned long long)recoveryContactCountForAltDSID:(id)a0;
- (void).cxx_destruct;
- (BOOL)isOTEnabledForContext:(id)a0;

@end
