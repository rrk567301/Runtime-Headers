@class NSMutableDictionary;

@interface FCWidget : NSObject {
    NSMutableDictionary *_dictionary;
}

+ (id)widgetWithPath:(id)a0;
+ (id)widgetWithDictionary:(id)a0;
+ (id)installedWidgets;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)description;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (long long)compare:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)path;
- (id)bundleID;
- (id)displayName;
- (void)setPath:(id)a0;
- (id)initWithPath:(id)a0;
- (void)setDisplayName:(id)a0;
- (void)setBundleID:(id)a0;
- (id)plistRepresentation;

@end
