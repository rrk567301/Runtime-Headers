@class NSString;

@interface ATXHomeScreenShortcut : NSObject <ATXHomeScreenLeafIconRepresentable>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) struct CGImage { } *icon;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *bundleIdentifierForDisplay;
@property (readonly, nonatomic) char isAppLaunchWorkflow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)isEqualToATXHomeScreenShortcut:(id)a0;
- (id)dictionaryRepresentationForIntrospection;
- (id)initWithIdentifier:(id)a0 name:(id)a1 bundleIdentifierForDisplay:(id)a2;
- (id)initWithIdentifier:(id)a0 name:(id)a1 bundleIdentifierForDisplay:(id)a2 isAppLaunchWorkflow:(char)a3;

@end
