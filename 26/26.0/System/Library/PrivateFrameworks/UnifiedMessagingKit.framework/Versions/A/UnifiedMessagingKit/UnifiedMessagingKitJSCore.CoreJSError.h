@class NSString, NSDictionary;

@interface UnifiedMessagingKitJSCore.CoreJSError : NSError <_TtP25UnifiedMessagingKitJSCoreP33_6431FEA48D341F05704D7744D695F7F817CoreJSErrorExport_>

@property (nonatomic, readonly) NSString *message;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSDictionary *export;

- (id)initWithCoder:(id)a0;
- (id)initWithDomain:(id)a0 code:(long long)a1 userInfo:(id)a2;

@end
