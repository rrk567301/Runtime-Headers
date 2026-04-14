@class NSURL, NSString, INFile;

@interface WFLinkMetadata : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSURL *originalURL;
@property (retain, nonatomic) NSURL *URL;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) INFile *image;
@property (copy, nonatomic) INFile *icon;
@property (copy, nonatomic) INFile *video;
@property (copy, nonatomic) NSURL *remoteVideo;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithOriginalURL:(id)a0 URL:(id)a1 title:(id)a2 image:(id)a3 icon:(id)a4 video:(id)a5 remoteVideo:(id)a6;

@end
