@interface TSKRemovedFromDocumentContext : NSObject

+ (id)hidingContext;
+ (id)movingContext;

- (id)undoContext;
- (BOOL)wasHidden;
- (BOOL)wasMoved;

@end
