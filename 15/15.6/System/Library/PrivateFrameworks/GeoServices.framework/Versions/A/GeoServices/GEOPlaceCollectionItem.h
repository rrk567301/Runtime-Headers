@class NSString, NSArray, GEOMapItemIdentifier, NSURL, GEOQuickLink, GEOPDPlaceCollectionItem;

@interface GEOPlaceCollectionItem : NSObject {
    GEOPDPlaceCollectionItem *_placeCollectionItem;
}

@property (readonly, nonatomic) NSString *itemDescription;
@property (readonly, nonatomic) NSString *itemHTMLDescription;
@property (readonly, nonatomic) GEOMapItemIdentifier *itemIdentifier;
@property (readonly, nonatomic) NSArray *photos;
@property (readonly, nonatomic) char supportsPhotoFallback;
@property (readonly, nonatomic) NSURL *reviewUrl;
@property (readonly, nonatomic) NSString *reviewText;
@property (readonly, nonatomic) GEOQuickLink *appClip;
@property (readonly, nonatomic) char disableAppClipFallback;

- (id)description;
- (void).cxx_destruct;
- (id)initWithPlaceCollectionItem:(id)a0;

@end
