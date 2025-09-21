@interface TSKRemovedFromDocumentContext : NSObject

+ (id)hidingContext;
+ (id)movingContext;

- (char)wasMoved;
- (id)undoContext;
- (char)wasHidden;

@end
