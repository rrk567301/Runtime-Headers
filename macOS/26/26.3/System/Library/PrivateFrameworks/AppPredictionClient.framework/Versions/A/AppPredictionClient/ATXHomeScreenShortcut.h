@class NSString;

@interface ATXHomeScreenShortcut : NSObject <ATXHomeScreenLeafIconRepresentable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) struct CGImage { } *icon;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *bundleIdentifierForDisplay;
@property (readonly, nonatomic) BOOL isAppLaunchWorkflow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)dictionaryRepresentationForIntrospection;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualToATXHomeScreenShortcut:(id)a0;
- (id)initWithIdentifier:(id)a0 name:(id)a1 bundleIdentifierForDisplay:(id)a2;
- (id)initWithIdentifier:(id)a0 name:(id)a1 bundleIdentifierForDisplay:(id)a2 isAppLaunchWorkflow:(BOOL)a3;

@end
