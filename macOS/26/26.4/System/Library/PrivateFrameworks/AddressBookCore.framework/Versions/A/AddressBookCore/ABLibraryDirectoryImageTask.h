@class NSArray;

@interface ABLibraryDirectoryImageTask : CNTask {
    NSArray *_emailAddresses;
}

+ (void)_cacheAvailableLibraryImagesPeopleFolders;

- (id)run:(id *)a0;
- (void)dealloc;
- (id)initWithEmailAddresses:(id)a0;

@end
