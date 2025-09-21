@class NSString;

@interface PLPhotoStreamAlbum : PLManagedAlbum

@property (retain, nonatomic) NSString *personID;

+ (id)entityName;
+ (id)keyPathsForValuesAffectingPersonID;
+ (id)photoStreamAlbumWithStreamID:(id)a0 inPhotoLibrary:(id)a1 createIfNeeded:(char)a2;

- (void)awakeFromInsert;
- (char)shouldDeleteWhenEmpty;
- (void)addAssetOrderedByDataTaken:(id)a0;

@end
