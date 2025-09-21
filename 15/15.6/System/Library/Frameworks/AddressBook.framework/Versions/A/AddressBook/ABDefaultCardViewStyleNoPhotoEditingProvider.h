@interface ABDefaultCardViewStyleNoPhotoEditingProvider : ABCardViewStyleProvider

- (char)allowsPhotoEditing;
- (char)allowsImmediateEditing;
- (char)isContentSizeObservable;

@end
