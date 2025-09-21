@class NSArray, NSMutableDictionary;

@interface IFFailureManager : NSObject {
    NSMutableDictionary *_requestsDict;
    NSArray *_supportedElements;
    char _armed;
}

+ (id)sharedManager;

- (void)dealloc;
- (id)init;
- (void)setRequest:(id)a0;
- (void)readRequestsFromVolumeAtPath:(id)a0;
- (void)removeRequestForElementNamed:(id)a0;
- (id)requestForElementNamed:(id)a0;
- (void)setArmed:(char)a0;
- (id)supportedElements;

@end
