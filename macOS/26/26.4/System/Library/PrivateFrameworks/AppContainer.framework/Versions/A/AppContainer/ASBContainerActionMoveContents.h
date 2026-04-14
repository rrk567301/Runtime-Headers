@class NSString;

@interface ASBContainerActionMoveContents : ASBContainerAction {
    NSString *_sourceSpec;
    NSString *_destSpec;
}

- (void).cxx_destruct;
- (id)description;
- (id)initWithSourcePath:(id)a0 destinationPath:(id)a1;
- (BOOL)performWithContainer:(id)a0 usingFileManager:(id)a1 error:(id *)a2;

@end
