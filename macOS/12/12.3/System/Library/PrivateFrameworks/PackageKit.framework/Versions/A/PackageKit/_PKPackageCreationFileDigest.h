@class NSString;

@interface _PKPackageCreationFileDigest : NSObject {
    NSString *_path;
    NSString *_digest;
}

- (void)dealloc;
- (id)initWithPath:(id)a0;
- (id)digest;

@end
