@class NSURL;

@interface SMArchiver : NSObject

@property (retain) NSURL *sourcePath;
@property (retain) NSURL *destinationPath;

- (BOOL)archive;
- (void).cxx_destruct;
- (BOOL)unarchive;
- (id)initWithSourcePath:(id)a0 destinationPath:(id)a1;

@end
