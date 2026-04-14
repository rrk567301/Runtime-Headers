@class NSURL;

@interface ArtworkFolderAccess : NSObject

@property (retain, nonatomic) NSURL *url;
@property (nonatomic) BOOL didStartAccess;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithURL:(id)a0 andExtension:(id)a1;

@end
