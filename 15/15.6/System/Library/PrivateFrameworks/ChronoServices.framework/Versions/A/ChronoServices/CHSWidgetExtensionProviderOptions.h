@class NSString;

@interface CHSWidgetExtensionProviderOptions : NSObject <NSSecureCoding, NSCopying>

@property (class, nonatomic) char supportsSecureCoding;
@property (class, nonatomic, readonly) CHSWidgetExtensionProviderOptions *widgets;
@property (class, nonatomic, readonly) CHSWidgetExtensionProviderOptions *visibleControls;
@property (class, nonatomic, readonly) CHSWidgetExtensionProviderOptions *allControls;
@property (class, nonatomic, readonly) CHSWidgetExtensionProviderOptions *controls;

@property (nonatomic, readonly) char matchesEverything;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ controlsPredicate;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ widgetsPredicate;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ includeIntents;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *description;

- (id)copyWithZone:(void *)a0;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)isSubsetOf:(id)a0;
- (id)initWithWidgetsPredicate:(id)a0 controlsPredicate:(id)a1;
- (id)initWithWidgetsPredicate:(id)a0 controlsPredicate:(id)a1 includeIntents:(char)a2;
- (char)matchesControlDescriptor:(id)a0;
- (char)matchesExtension:(id)a0;
- (char)matchesWidgetDescriptor:(id)a0;
- (id)mergedWith:(id)a0;

@end
