@class NSArray;

@interface GEOPictureItemContainer : NSObject <GEOPictureItemContainer>

@property (readonly, nonatomic) NSArray *pictureItems;
@property (readonly, nonatomic) char allowFullScreenPhoto;

- (id)init;
- (void).cxx_destruct;
- (id)initWithPictureItemContainer:(id)a0;
- (id)initWithPictureItems:(id)a0 allowFullScreenPhoto:(char)a1;

@end
