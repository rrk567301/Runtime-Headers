@class NSString, CHSControlDescriptorsPredicate, CHSWidgetDescriptorsPredicate;

@interface CHSWidgetExtensionProviderOptions : NSObject <NSSecureCoding, NSCopying>

@property (class, nonatomic) BOOL supportsSecureCoding;
@property (class, nonatomic, readonly) CHSWidgetExtensionProviderOptions *widgets;
@property (class, nonatomic, readonly) CHSWidgetExtensionProviderOptions *visibleControls;
@property (class, nonatomic, readonly) CHSWidgetExtensionProviderOptions *allControls;
@property (class, nonatomic, readonly) CHSWidgetExtensionProviderOptions *controls;

@property (nonatomic, readonly) BOOL matchesEverything;
@property (nonatomic, readonly) CHSControlDescriptorsPredicate *controlsPredicate;
@property (nonatomic, readonly) CHSWidgetDescriptorsPredicate *widgetsPredicate;
@property (nonatomic, readonly) BOOL includeIntents;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *description;

- (id)copyWithZone:(void *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)isSubsetOf:(id)a0;
- (id)initWithWidgetsPredicate:(id)a0 controlsPredicate:(id)a1;
- (id)initWithWidgetsPredicate:(id)a0 controlsPredicate:(id)a1 includeIntents:(BOOL)a2;
- (BOOL)matchesControlDescriptor:(id)a0;
- (BOOL)matchesExtension:(id)a0;
- (BOOL)matchesWidgetDescriptor:(id)a0;
- (id)mergedWith:(id)a0;

@end
