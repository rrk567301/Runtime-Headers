@class NSURL, NSString, FCAssetHandle;

@interface FCSportsEventLiveStreamVideo : NSObject

@property (readonly, copy, nonatomic) NSURL *videoURL;
@property (readonly, nonatomic) FCAssetHandle *videoStillImage;
@property (readonly, copy, nonatomic) NSString *videoTitle;
@property (readonly, copy, nonatomic) NSString *videoDescription;
@property (readonly, copy, nonatomic) NSString *videoKicker;

- (void).cxx_destruct;
- (id)init;
- (id)initWithVideoURL:(id)a0 videoStillImage:(id)a1 videoTitle:(id)a2 videoDescription:(id)a3 videoKicker:(id)a4;

@end
