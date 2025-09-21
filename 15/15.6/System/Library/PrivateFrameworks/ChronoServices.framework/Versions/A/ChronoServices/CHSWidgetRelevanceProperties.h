@class CHSExtensionIdentity, NSString, NSArray, CHSWidgetRelevanceKey;

@interface CHSWidgetRelevanceProperties : NSObject <NSSecureCoding, NSCopying, CHSWidgetIdentifiable> {
    id /* block */ _relevanceFunction;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) CHSWidgetRelevanceKey *key;
@property (readonly, nonatomic) CHSExtensionIdentity *extensionIdentity;
@property (readonly, nonatomic) NSString *kind;
@property (readonly, nonatomic) char supportsBackgroundRefresh;
@property (readonly, nonatomic) double lastRelevanceUpdate;
@property (readonly, nonatomic) NSArray *relevances;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)matches:(id)a0;
- (id)initWithSupportsBackgroundRefresh:(char)a0 lastRelevanceUpdate:(double)a1 relevances:(id)a2;
- (id)initWithWidgetExtensionIdentity:(id)a0 kind:(id)a1 supportsBackgroundRefresh:(char)a2 lastRelevanceUpdate:(double)a3 relevanceFunction:(id /* block */)a4;
- (id)initWithWidgetExtensionIdentity:(id)a0 kind:(id)a1 supportsBackgroundRefresh:(char)a2 lastRelevanceUpdate:(double)a3 relevances:(id)a4;
- (id)initWithWidgetRelevanceKey:(id)a0 supportsBackgroundRefresh:(char)a1 lastRelevanceUpdate:(double)a2 relevances:(id)a3;

@end
