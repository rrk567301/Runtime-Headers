@class NSString, NSDictionary;

@interface UnifiedMessagingKitJSCore.JSAccount : NSObject <_TtP25UnifiedMessagingKitJSCoreP33_ABF9415CEAF9AFD35B01C991238926AB16JSAccountExports_> {
    void /* unknown type, empty encoding */ account;
}

@property (nonatomic, readonly) NSString *altDsid;
@property (nonatomic, readonly) NSString *credits;
@property (nonatomic, readonly) NSString *dsid;
@property (nonatomic, readonly) NSString *firstName;
@property (nonatomic, readonly) NSDictionary *flags;
@property (nonatomic, readonly) NSString *fullName;
@property (nonatomic, readonly) BOOL hasFamilySharingEnabled;
@property (nonatomic, readonly) BOOL hasiCloudFamily;
@property (nonatomic, readonly) BOOL isHSA2;
@property (nonatomic, readonly) NSString *lastName;
@property (nonatomic, readonly) NSDictionary *privacyAcknowledgement;
@property (nonatomic, readonly) NSString *storefront;
@property (nonatomic, readonly) NSString *username;

- (id)init;
- (void).cxx_destruct;

@end
