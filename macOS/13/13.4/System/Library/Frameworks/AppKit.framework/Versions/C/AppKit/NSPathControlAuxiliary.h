@class NSPathComponentCell;

@interface NSPathControlAuxiliary : NSObject

@property unsigned long long dropOperation;
@property (retain) NSPathComponentCell *dropCell;

- (void)dealloc;

@end
