@class NSMutableDictionary;

@interface FCWidget : NSObject {
    NSMutableDictionary *_dictionary;
}

+ (id)widgetWithPath:(id)a0;
+ (id)installedWidgets;
+ (id)widgetWithDictionary:(id)a0;

- (long long)compare:(id)a0;
- (id)bundleID;
- (void)setPath:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setDisplayName:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)setBundleID:(id)a0;
- (id)description;
- (id)displayName;
- (id)path;
- (id)initWithPath:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)plistRepresentation;
- (void)dealloc;

@end
