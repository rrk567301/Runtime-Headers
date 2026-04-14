@class NSMutableDictionary;

@interface FCWidget : NSObject {
    NSMutableDictionary *_dictionary;
}

+ (id)widgetWithPath:(id)a0;
+ (id)installedWidgets;
+ (id)widgetWithDictionary:(id)a0;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithPath:(id)a0;
- (void)setPath:(id)a0;
- (id)displayName;
- (long long)compare:(id)a0;
- (id)path;
- (void)setBundleID:(id)a0;
- (void)setDisplayName:(id)a0;
- (id)description;
- (void)dealloc;
- (id)initWithDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)bundleID;
- (id)plistRepresentation;

@end
