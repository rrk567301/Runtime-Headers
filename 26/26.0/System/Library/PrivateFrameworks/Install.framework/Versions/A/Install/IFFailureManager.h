@class NSArray, NSMutableDictionary;

@interface IFFailureManager : NSObject {
    NSMutableDictionary *_requestsDict;
    NSArray *_supportedElements;
    BOOL _armed;
}

+ (id)sharedManager;

- (void)dealloc;
- (void)setRequest:(id)a0;
- (id)init;
- (void)readRequestsFromVolumeAtPath:(id)a0;
- (void)removeRequestForElementNamed:(id)a0;
- (id)requestForElementNamed:(id)a0;
- (void)setArmed:(BOOL)a0;
- (id)supportedElements;

@end
