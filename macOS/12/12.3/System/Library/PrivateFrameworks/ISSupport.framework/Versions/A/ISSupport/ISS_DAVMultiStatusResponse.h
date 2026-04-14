@class NSURL, NSString, NSMutableArray;

@interface ISS_DAVMultiStatusResponse : NSObject {
    NSURL *href;
    NSURL *_targetHref;
    NSURL *_sourceHref;
    NSString *responseDescription;
    NSMutableArray *depthLimitPaths;
    int statusCode;
}

- (void)finalize;
- (void)dealloc;
- (id)init;
- (int)statusCode;
- (id)href;
- (id)responseDescription;
- (id)initWithXMLNode:(id)a0;
- (id)sourceHref;
- (id)targetHref;
- (BOOL)handleResponseSubnode:(id)a0;
- (id)depthLimitPaths;

@end
