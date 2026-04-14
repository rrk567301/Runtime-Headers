@class NSMutableDictionary;

@interface IDSNWPathUtils : NSObject {
    NSMutableDictionary *_sessionIDToSlicingPathEvaluator;
    NSMutableDictionary *_sessionIDToSlicingBitMask;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (BOOL)filterVirtualInterfaces:(char *)a0;
- (id)getDefaultPath;
- (BOOL)isVoWiFiInterface:(char *)a0;

@end
