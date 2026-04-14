@class NSString, AVOfflineMediaContentKeyInfo;

@interface AVOfflineMediaSegmentInfo : NSObject

@property (readonly, nonatomic) NSString *path;
@property (readonly, nonatomic) NSString *networkURL;
@property (readonly, nonatomic) AVOfflineMediaContentKeyInfo *contentKeyInfo;

- (void)dealloc;
- (id)initWithPath:(id)a0 networkURL:(id)a1 contentKeyInfo:(id)a2;

@end
