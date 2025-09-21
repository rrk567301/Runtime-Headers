@interface TSKRemovedFromDocumentContext : NSObject

+ (id)hidingContext;
+ (id)movingContext;

- (BOOL)wasMoved;
- (BOOL)wasHidden;
- (id)undoContext;

@end
