@class NSMutableDictionary;

@interface FCWidget : NSObject {
    NSMutableDictionary *_dictionary;
}

+ (id)widgetWithPath:(id)a0;
+ (id)installedWidgets;
+ (id)widgetWithDictionary:(id)a0;

- (void)setBundleID:(id)a0;
- (id)initWithPath:(id)a0;
- (void)setPath:(id)a0;
- (id)displayName;
- (id)plistRepresentation;
- (id)bundleID;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (long long)compare:(id)a0;
- (id)path;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)setDisplayName:(id)a0;
- (void)dealloc;

@end
