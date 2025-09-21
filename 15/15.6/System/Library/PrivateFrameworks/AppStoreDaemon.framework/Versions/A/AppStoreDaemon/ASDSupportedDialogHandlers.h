@interface ASDSupportedDialogHandlers : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly) char handlesAlerts;
@property (readonly) char handlesAuthentication;
@property (readonly) char handlesDialogs;
@property (readonly) char handlesEngagement;
@property (readonly) char handlesViews;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initForInternalClient;
- (id)initWithDialogObserver:(id)a0;

@end
