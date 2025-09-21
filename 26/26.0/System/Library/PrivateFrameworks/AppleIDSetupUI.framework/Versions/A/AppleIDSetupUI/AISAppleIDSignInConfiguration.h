@class NSArray, NSString, AIDAServiceContext;

@interface AISAppleIDSignInConfiguration : NSObject {
    void /* function */ username;
    void /* function */ serviceTypes;
    void /* function */ privacyLinkIdentifiers;
}

@property (class, nonatomic, readonly) NSArray *defaultServiceTypes;
@property (class, nonatomic, readonly) NSString *defaultPrivacyIdentifier;

@property (nonatomic, copy) NSString *username;
@property (nonatomic) BOOL canEditUsername;
@property (nonatomic) BOOL allowSkip;
@property (nonatomic) BOOL shouldShowSystemBackButton;
@property (nonatomic, copy) NSArray *serviceTypes;
@property (nonatomic) BOOL isProximitySetupEnabled;
@property (nonatomic, copy) NSArray *privacyLinkIdentifiers;
@property (nonatomic, retain) AIDAServiceContext *aidaServiceContext;
@property (nonatomic) long long signInFlowType;

- (id)init;
- (void).cxx_destruct;

@end
