@class NSString, NSMutableSet;

@interface PXFileNameUniquifierInMemoryCacheSource : NSObject <PXFileNameUniquifierExistingFileSource>

@property (readonly, nonatomic) NSMutableSet *knownFilePaths;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (BOOL)fileExistsAtPath:(id)a0;
- (void).cxx_destruct;
- (void)rememberUniquifiedFilePath:(id)a0;

@end
