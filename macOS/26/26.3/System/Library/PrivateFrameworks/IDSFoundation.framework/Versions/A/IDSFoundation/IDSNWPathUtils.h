@class NSMutableDictionary;

@interface IDSNWPathUtils : NSObject {
    NSMutableDictionary *_sessionIDToSlicingPathEvaluator;
    NSMutableDictionary *_sessionIDToSlicingBitMask;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)filterVirtualInterfaces:(char *)a0;
- (id)getDefaultPath;
- (BOOL)isVoWiFiInterface:(char *)a0;

@end
