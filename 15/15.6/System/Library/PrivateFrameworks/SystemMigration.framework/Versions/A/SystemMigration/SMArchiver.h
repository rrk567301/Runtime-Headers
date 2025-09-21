@class NSURL;

@interface SMArchiver : NSObject

@property (retain) NSURL *sourcePath;
@property (retain) NSURL *destinationPath;

- (void).cxx_destruct;
- (id)initWithSourcePath:(id)a0 destinationPath:(id)a1;
- (char)archive;
- (char)unarchive;

@end
