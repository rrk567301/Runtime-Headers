@class NSString;

@interface SODetailViewImageBrowserItem : NSObject

@property (retain, nonatomic) NSString *path;

+ (id)itemWithPath:(id)a0;

- (void).cxx_destruct;
- (id)imageRepresentation;
- (id)imageUID;
- (id)imageRepresentationType;
- (id)imageTitle;

@end
