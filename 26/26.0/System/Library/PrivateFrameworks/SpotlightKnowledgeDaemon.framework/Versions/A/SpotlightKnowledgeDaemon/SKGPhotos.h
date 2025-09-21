@interface SKGPhotos : SKGNodes

+ (id)labels;
+ (Class)nodeClass;
+ (Class)edgeClass;
+ (id)photoWithPhotoIdentifier:(id)a0 inGraph:(id)a1;

- (void)enumeratePhotosInGraph:(id)a0 usingBlock:(id /* block */)a1;
- (id)initWithPhotoNode:(id)a0 inGraph:(id)a1;

@end
