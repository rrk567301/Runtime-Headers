@class NSString;
@protocol _TtP25UnifiedMessagingKitJSCore19JSClientDemoExports_;

@interface UnifiedMessagingKitJSCore.JSClient : NSObject <UnifiedMessagingKitJSCore.JSClientExports> {
    void /* unknown type, empty encoding */ clientInfo;
}

@property (nonatomic, readonly) NSString *clientIdentifier;
@property (nonatomic, readonly) NSString *clientVersion;
@property (nonatomic, retain) id<_TtP25UnifiedMessagingKitJSCore19JSClientDemoExports_> demo;
@property (nonatomic, readonly) NSString *frameworkVersion;
@property (nonatomic, readonly) BOOL isFirstParty;
@property (nonatomic, readonly) NSString *locale;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *userAgent;

- (void).cxx_destruct;
- (id)init;

@end
