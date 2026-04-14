@class NSURL;

@interface SMArchiver : NSObject

@property (retain) NSURL *sourcePath;
@property (retain) NSURL *destinationPath;

- (BOOL)unarchive;
- (void).cxx_destruct;
- (BOOL)archive;
- (id)initWithSourcePath:(id)a0 destinationPath:(id)a1;

@end
