@class NSMutableDictionary;

@interface DebugPreferences : NSObject {
    NSMutableDictionary *_prefDictionary;
}

+ (id)defaultDebugPreferences;

- (id)init;
- (void)dealloc;
- (float)floatForKey:(id)a0;

@end
