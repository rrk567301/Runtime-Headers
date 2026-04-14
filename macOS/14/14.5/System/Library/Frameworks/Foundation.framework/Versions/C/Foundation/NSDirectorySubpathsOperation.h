@class NSMutableArray;

@interface NSDirectorySubpathsOperation : NSDirectoryTraversalOperation {
    NSMutableArray *_subpaths;
}

+ (id)_errorWithErrno:(int)a0 atPath:(id)a1;
+ (id)directorySubpathsOperationAtPath:(id)a0;

- (void)dealloc;
- (void)handlePathname:(id)a0;
- (id)subpaths;

@end
