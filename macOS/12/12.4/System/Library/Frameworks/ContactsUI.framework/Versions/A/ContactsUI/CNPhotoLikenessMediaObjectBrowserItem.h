@class MLMediaObject;

@interface CNPhotoLikenessMediaObjectBrowserItem : NSObject

@property (retain) MLMediaObject *mediaObject;
@property unsigned long long imageVersion;

+ (id)findItunesArtworkImageFromMediaObject:(id)a0;
+ (id)findThumbnailImageFromMediaObject:(id)a0;
+ (id)findIconImageFromMediaObject:(id)a0;
+ (id)createImageByExecutingBlock:(id /* block */)a0 whileAccessingSecureLocationPointedToByURL:(id)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)imageRepresentation;
- (id)imageUID;
- (id)imageRepresentationType;
- (id)imageTitle;

@end
