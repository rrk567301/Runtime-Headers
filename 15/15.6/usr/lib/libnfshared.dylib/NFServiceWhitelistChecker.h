@class NSString, NSOrderedSet, NSMutableOrderedSet, NSMutableArray;

@interface NFServiceWhitelistChecker : NSObject <NSCopying> {
    NSMutableArray *_iso15693TagAccessFilters;
    NSMutableOrderedSet *_trustedISO7816AidList;
    NSString *_clientName;
    int _clientProcessIdentifier;
    char _iso15693ReaderAccess;
    char _vasReaderAccess;
    char _ndefReaderAccess;
    char _tagReaderAccess;
}

@property (readonly, copy, nonatomic) NSString *clientName;
@property (readonly, retain, nonatomic) NSString *readerPurposeString;
@property (readonly, retain, nonatomic) NSOrderedSet *trustedISO7816AidList;
@property (retain, nonatomic) NSString *applicationIdentifier;
@property (readonly, nonatomic) double sessionTimeLimit;
@property (readonly, nonatomic) char internalAccess;
@property (readonly, nonatomic) char nfcISO15693ReaderAccess;
@property (readonly, nonatomic) char seshatAccess;
@property (readonly, nonatomic) char miniNVWriteAccess;
@property (readonly, nonatomic) char lpmFactoryTest;
@property (readonly, nonatomic) char remoteAdminAccess;
@property (readonly, nonatomic) char nfcNDEFReaderAccess;
@property (readonly, nonatomic) char allowBackgroundedSession;
@property (readonly, nonatomic) char ignoreAppStateMonitor;
@property (readonly, nonatomic) char nfcTagReaderAccess;
@property (readonly, nonatomic) BOOL nfcTagReaderPACEPollingAllow;
@property (readonly, nonatomic) char nfcVASReaderAccess;
@property (readonly, nonatomic) char externalReaderAccessAllow;
@property (readonly, nonatomic) char useUnfilteredApplets;
@property (readonly, nonatomic) BOOL singleUserAccess;
@property (readonly, nonatomic) BOOL purpleTrustAccess;
@property (readonly, nonatomic) BOOL surfSessionAccess;
@property (readonly, nonatomic) BOOL eCommerceAccess;
@property (readonly, nonatomic) BOOL seSessionAccess;
@property (readonly, nonatomic) BOOL seLoggingSessionAccess;
@property (readonly, nonatomic) BOOL lpemConfigSessionAccess;
@property (readonly, nonatomic) BOOL readerInternalAccess;
@property (readonly, nonatomic) BOOL cardModeAccess;
@property (readonly, nonatomic) BOOL hceAccess;
@property (readonly, nonatomic) BOOL radioToggle;
@property (readonly, nonatomic) BOOL pollingProfileUpdate;
@property (readonly, nonatomic) BOOL dontResetAssertion;
@property (readonly, nonatomic) BOOL bgTagReadingAssertion;
@property (readonly, nonatomic) BOOL chAssertion;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithConnection:(id)a0;
- (id)_arrayValueOfEntitlement:(id)a0 secTask:(struct __SecTask { } *)a1;
- (char)_boolValueOfEntitlement:(id)a0 secTask:(struct __SecTask { } *)a1;
- (void *)_copyValueOfEntitlement:(id)a0 secTask:(struct __SecTask { } *)a1;
- (id)_createAccessDictionaryFromICCode:(id)a0 serialNumber:(id)a1 maximumFilterStringLength:(unsigned long long)a2;
- (void)_initCoreNFCEntitlements:(id)a0 secTask:(struct __SecTask { } *)a1;
- (void)_initISO15693TagSpecifier:(id)a0;
- (void)_initISO7816PermissibleAIDListWithSecTask:(struct __SecTask { } *)a0 infoPlist:(id)a1;
- (void)_initTagSpecifier:(id)a0 maximumFilterStringLength:(unsigned long long)a1;
- (char)_isAIDStringValid:(id)a0;
- (id)_stringFromArray:(id)a0;
- (id)_stringFromISO15693AccessFilterList;
- (id)_stringValueOfEntitlement:(id)a0 secTask:(struct __SecTask { } *)a1;
- (id)getAppInfoDictionary;
- (id)initWithConnection:(id)a0 coreNFCConnection:(char)a1;
- (unsigned int)validateISO15693TagAccessWithManufacturerCode:(unsigned long long)a0;
- (unsigned int)validateISO15693TagAccessWithManufacturerCode:(unsigned long long)a0 serialNumber:(id)a1;
- (unsigned int)validateISO15693TagAcesssWithUID:(id)a0;

@end
