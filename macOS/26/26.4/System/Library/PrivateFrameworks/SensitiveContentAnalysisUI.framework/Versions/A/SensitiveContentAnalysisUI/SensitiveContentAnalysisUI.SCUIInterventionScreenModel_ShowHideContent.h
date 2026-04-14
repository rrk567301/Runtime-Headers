@class NSString, NSArray;

@interface SensitiveContentAnalysisUI.SCUIInterventionScreenModel_ShowHideContent : _TtCs12_SwiftObject <SCUIInterventionScreenModelProtocol> {
    void /* unknown type, empty encoding */ config;
    void /* unknown type, empty encoding */ participantContactCache;
}

@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) long long screen;
@property (nonatomic, readonly) long long interventionType;
@property (nonatomic, readonly) NSString *imageName;
@property (nonatomic, readonly) NSString *emoji;
@property (nonatomic, readonly) NSString *subtitle;
@property (nonatomic, readonly) NSArray *bullets;
@property (nonatomic, readonly) NSArray *actions;
@property (nonatomic, readonly) long long options;

@end
