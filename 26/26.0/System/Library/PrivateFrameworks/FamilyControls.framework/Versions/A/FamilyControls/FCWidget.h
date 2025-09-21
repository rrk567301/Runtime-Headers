@class NSMutableDictionary;

@interface FCWidget : NSObject {
    NSMutableDictionary *_dictionary;
}

+ (id)widgetWithPath:(id)a0;
+ (id)installedWidgets;
+ (id)widgetWithDictionary:(id)a0;

- (id)initWithPath:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)setPath:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)plistRepresentation;
- (id)bundleID;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setBundleID:(id)a0;
- (id)displayName;
- (id)path;
- (long long)compare:(id)a0;
- (void)setDisplayName:(id)a0;
- (id)description;

@end
