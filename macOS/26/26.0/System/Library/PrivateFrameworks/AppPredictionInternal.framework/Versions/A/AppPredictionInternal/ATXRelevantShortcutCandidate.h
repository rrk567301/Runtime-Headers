@class INIntent, NSString, NSArray, CHSWidgetDescriptor;

@interface ATXRelevantShortcutCandidate : NSObject <NSCopying> {
    void /* function */ donationBundleIdentifier;
    void /* function */ relevantContexts;
}

@property (nonatomic, readonly) CHSWidgetDescriptor *widgetDescriptor;
@property (nonatomic, readonly) NSString *donationBundleIdentifier;
@property (nonatomic, readonly) INIntent *intent;
@property (nonatomic, readonly) NSArray *relevantContexts;
@property (nonatomic, readonly) NSString *description;

- (id)copyWithZone:(void *)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithWidgetDescriptor:(id)a0 donationBundleIdentifier:(id)a1 intent:(id)a2 relevantContexts:(id)a3;

@end
