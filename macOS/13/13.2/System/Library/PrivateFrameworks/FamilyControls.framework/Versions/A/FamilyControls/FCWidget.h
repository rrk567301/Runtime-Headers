@class NSMutableDictionary;

@interface FCWidget : NSObject {
    NSMutableDictionary *_dictionary;
}

+ (id)widgetWithPath:(id)a0;
+ (id)widgetWithDictionary:(id)a0;
+ (id)installedWidgets;

- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
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
