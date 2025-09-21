@class NSString;
@protocol _TtP25UnifiedMessagingKitJSCore19JSClientDemoExports_;

@interface UnifiedMessagingKitJSCore.JSClient : NSObject <UnifiedMessagingKitJSCore.JSClientExports> {
    void /* unknown type, empty encoding */ clientInfo;
}

@property (nonatomic, readonly) NSString *clientIdentifier;
@property (nonatomic, readonly) NSString *clientVersion;
@property (nonatomic, readonly) NSString *locale;
@property (nonatomic, readonly) NSString *userAgent;
@property (nonatomic, retain) id<_TtP25UnifiedMessagingKitJSCore19JSClientDemoExports_> demo;

- (id)init;
- (void).cxx_destruct;

@end
