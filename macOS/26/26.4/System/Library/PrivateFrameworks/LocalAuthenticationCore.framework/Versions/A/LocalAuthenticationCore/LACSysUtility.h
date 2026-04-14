@class NSString;

@interface LACSysUtility : NSObject <LACSysUtilityType>

@property (class, readonly, nonatomic) LACSysUtility *sharedInstance;

@property (readonly, nonatomic) BOOL hasPPL;
@property (readonly, nonatomic) BOOL hasTXM;
@property (readonly, nonatomic) BOOL hasCodeSigningMonitor;
@property (readonly, nonatomic) unsigned long long txmSecurityBootMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned int)_getCodeSigningConfig;
- (unsigned int)_getCodeSigningMonitorType;
- (BOOL)_hasCodeSigningMonitorOfType:(unsigned int)a0;

@end
