@class NSString;

@interface ATXCSCWidgetPersonality : NSObject <CHSWidgetPersonality>

@property (copy, nonatomic) NSString *extensionBundleIdentifier;
@property (retain, nonatomic) NSString *kind;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)matchesPersonality:(id)a0;
- (id)initWithExtensionBundleIdentifier:(id)a0 kind:(id)a1;

@end
