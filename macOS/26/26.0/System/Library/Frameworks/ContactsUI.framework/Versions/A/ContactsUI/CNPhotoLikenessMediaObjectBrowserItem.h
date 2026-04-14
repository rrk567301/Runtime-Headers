@class MLMediaObject;

@interface CNPhotoLikenessMediaObjectBrowserItem : NSObject

@property (retain) MLMediaObject *mediaObject;
@property unsigned long long imageVersion;

+ (id)createImageByExecutingBlock:(id /* block */)a0 whileAccessingSecureLocationPointedToByURL:(id)a1;
+ (id)findIconImageFromMediaObject:(id)a0;
+ (id)findItunesArtworkImageFromMediaObject:(id)a0;
+ (id)findThumbnailImageFromMediaObject:(id)a0;

- (void)dealloc;
- (id)imageRepresentation;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (id)imageRepresentationType;
- (id)imageTitle;
- (id)imageUID;

@end
