@class NSMutableArray;

@interface NSDirectorySubpathsOperation : NSDirectoryTraversalOperation {
    NSMutableArray *_subpaths;
}

+ (id)directorySubpathsOperationAtPath:(id)a0;
+ (id)_errorWithErrno:(int)a0 atPath:(id)a1;

- (void)dealloc;
- (id)subpaths;
- (void)handlePathname:(id)a0;

@end
