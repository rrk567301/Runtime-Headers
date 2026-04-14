@class NSString;

@interface ContextualSuggestionClient.WidgetPersonality : NSObject <CHSWidgetPersonality> {
    void /* function */ extensionBundleIdentifier;
    void /* function */ kind;
}

@property (nonatomic, readonly) NSString *extensionBundleIdentifier;
@property (nonatomic, readonly) NSString *kind;

- (BOOL)matchesPersonality:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
