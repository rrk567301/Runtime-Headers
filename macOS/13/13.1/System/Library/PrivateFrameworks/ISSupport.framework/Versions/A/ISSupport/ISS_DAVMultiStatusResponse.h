@class NSURL, NSString, NSMutableArray;

@interface ISS_DAVMultiStatusResponse : NSObject {
    NSURL *href;
    NSURL *_targetHref;
    NSURL *_sourceHref;
    NSString *responseDescription;
    NSMutableArray *depthLimitPaths;
    int statusCode;
}

- (void)dealloc;
- (id)init;
- (void)finalize;
- (int)statusCode;
- (id)responseDescription;
- (id)href;
- (id)initWithXMLNode:(id)a0;
- (id)sourceHref;
- (id)targetHref;
- (id)depthLimitPaths;
- (BOOL)handleResponseSubnode:(id)a0;

@end
