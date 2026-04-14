@class NSString, NSArray;

@interface SCUIInterventionScreenModel : NSObject <SCUIInterventionScreenModelProtocol> {
    void /* unknown type, empty encoding */ config;
    void /* unknown type, empty encoding */ participantContactCache;
    void /* unknown type, empty encoding */ $__lazy_storage_$_canShowScreenTimePasscodeWarningBullet;
}

@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *subtitle;
@property (nonatomic, readonly) NSString *imageName;
@property (nonatomic, readonly) NSString *emoji;
@property (nonatomic, readonly) NSArray *bullets;
@property (nonatomic, readonly) NSArray *actions;
@property (nonatomic, readonly) long long screen;
@property (nonatomic, readonly) long long workflow;
@property (nonatomic, readonly) long long interventionType;
@property (nonatomic, readonly) long long options;

- (void).cxx_destruct;
- (id)init;
- (id)nextModel;
- (id)screenThreeMode;
- (void)bypassInterventionForContainer:(id)a0 delegate:(id)a1;
- (void)collectInterventionInteractionEventWith:(long long)a0;
- (void)collectResourceInteractionEventWith:(long long)a0;
- (void)didAskForMoreHelpWithPresentingViewController:(id)a0;
- (id)initWithScreen:(long long)a0 workflow:(long long)a1 type:(long long)a2 options:(long long)a3;

@end
