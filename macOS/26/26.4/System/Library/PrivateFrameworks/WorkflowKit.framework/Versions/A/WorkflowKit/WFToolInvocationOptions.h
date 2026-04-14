@class NSString, LNUserIdentity;

@interface WFToolInvocationOptions : NSObject {
    void /* function */ locale;
    void /* function */ requestIdentifier;
    void /* function */ lnInterfaceIdiom;
}

@property (nonatomic, readonly) long long lnInteractionMode;
@property (nonatomic, readonly) NSString *locale;
@property (nonatomic, readonly) NSString *requestIdentifier;
@property (nonatomic, readonly) NSString *lnInterfaceIdiom;
@property (nonatomic, readonly) long long lnConfirmationConditions;
@property (nonatomic, readonly) long long lnAssistantDismissalPolicy;
@property (nonatomic, readonly) LNUserIdentity *lnUserIdentity;

- (void).cxx_destruct;
- (id)init;

@end
