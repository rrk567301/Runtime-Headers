@class NSString, NSMutableDictionary;

@interface SABinaryLocator : NSObject {
    NSMutableDictionary *_mappings;
    NSString *_buildNumber;
    BOOL _dirty;
    BOOL _enabled;
}

+ (id)sharedBinaryLocator;

- (void).cxx_destruct;
- (id)init;
- (oneway void)done;

@end
