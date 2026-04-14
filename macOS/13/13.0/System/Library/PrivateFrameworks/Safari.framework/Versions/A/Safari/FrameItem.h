@class NSString, NSMutableArray, NSMutableDictionary;

@interface FrameItem : NSObject {
    NSMutableArray *children;
    NSString *name;
    NSMutableDictionary *cacheabilityDictionary;
    BOOL isSecure;
    BOOL hasNetworkError;
    BOOL hasChildFrames;
    BOOL hasScriptExceptions;
    BOOL hasRestrictedHTML5Features;
}

- (void).cxx_destruct;

@end
