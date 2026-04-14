@class NSURL;

@interface ITLibMediaItemData : NSObject

@property (retain, nonatomic) NSURL *URL;
@property (retain, nonatomic) NSURL *securityScopedURL;
@property (nonatomic) unsigned long long playlistCount;
@property (nonatomic) BOOL downloadable;

- (void).cxx_destruct;
- (id)init;

@end
