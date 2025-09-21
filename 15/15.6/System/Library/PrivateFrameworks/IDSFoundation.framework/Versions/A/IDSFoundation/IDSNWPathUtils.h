@class NSMutableDictionary;

@interface IDSNWPathUtils : NSObject {
    NSMutableDictionary *_sessionIDToSlicingPathEvaluator;
    NSMutableDictionary *_sessionIDToSlicingBitMask;
}

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (char)filterVirtualInterfaces:(char *)a0;
- (id)getDefaultPath;
- (char)isVoWiFiInterface:(char *)a0;

@end
