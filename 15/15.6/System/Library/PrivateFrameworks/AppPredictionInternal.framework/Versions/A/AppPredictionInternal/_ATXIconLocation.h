@class NSIndexPath;

@interface _ATXIconLocation : NSObject

@property (readonly, nonatomic) char isOnDock;
@property (readonly, nonatomic) char appearOnlyInAppLibrary;
@property (readonly, nonatomic) char isInstalled;
@property (readonly, nonatomic) NSIndexPath *indexPath;

- (void).cxx_destruct;
- (id)initWithIndexPath:(id)a0 isOnDock:(char)a1 existsInAppLibraryOnly:(char)a2 isInstalled:(char)a3;

@end
