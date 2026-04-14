@class NSURL;

@interface SMArchiver : NSObject

@property (retain) NSURL *sourcePath;
@property (retain) NSURL *destinationPath;

- (void).cxx_destruct;
- (BOOL)archive;
- (BOOL)unarchive;
- (id)initWithSourcePath:(id)a0 destinationPath:(id)a1;

@end
