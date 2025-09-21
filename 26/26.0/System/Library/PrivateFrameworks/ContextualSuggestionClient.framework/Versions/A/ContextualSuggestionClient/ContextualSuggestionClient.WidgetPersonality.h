@class NSString;

@interface ContextualSuggestionClient.WidgetPersonality : NSObject <CHSWidgetPersonality> {
    void /* function */ extensionBundleIdentifier;
    void /* function */ kind;
}

@property (nonatomic, readonly) NSString *extensionBundleIdentifier;
@property (nonatomic, readonly) NSString *kind;

- (id)init;
- (BOOL)matchesPersonality:(id)a0;
- (void).cxx_destruct;

@end
