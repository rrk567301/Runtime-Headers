@class NSString;

@interface ASBContainerActionMoveContents : ASBContainerAction {
    NSString *_sourceSpec;
    NSString *_destSpec;
}

- (id)description;
- (void).cxx_destruct;
- (BOOL)performWithContainer:(id)a0 usingFileManager:(id)a1 error:(id *)a2;
- (id)initWithSourcePath:(id)a0 destinationPath:(id)a1;

@end
