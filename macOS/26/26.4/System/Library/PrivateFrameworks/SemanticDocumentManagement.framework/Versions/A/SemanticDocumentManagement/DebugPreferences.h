@class NSMutableDictionary;

@interface DebugPreferences : NSObject {
    NSMutableDictionary *_prefDictionary;
}

+ (id)defaultDebugPreferences;

- (float)floatForKey:(id)a0;
- (id)init;
- (void)dealloc;

@end
