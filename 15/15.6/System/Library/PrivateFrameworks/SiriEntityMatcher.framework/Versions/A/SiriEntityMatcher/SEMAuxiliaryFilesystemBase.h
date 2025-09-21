@class NSString;

@interface SEMAuxiliaryFilesystemBase : SEMFilesystemBase {
    NSString *_name;
    char _isSaved;
}

+ (id)_savedBaseDirectoryURLWithName:(id)a0;
+ (char)savedBaseExistsWithName:(id)a0;
+ (id)savedBaseWithName:(id)a0;
+ (id)temporaryBaseWithName:(id)a0;

- (void).cxx_destruct;
- (void)remove;
- (id)save;
- (id)initWithName:(id)a0 isSaved:(char)a1;

@end
