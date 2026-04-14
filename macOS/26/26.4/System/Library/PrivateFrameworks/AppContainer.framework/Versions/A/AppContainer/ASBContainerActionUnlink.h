@class NSString;

@interface ASBContainerActionUnlink : ASBContainerAction {
    NSString *_pathSpec;
}

- (id)initWithPath:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (BOOL)performWithContainer:(id)a0 usingFileManager:(id)a1 error:(id *)a2;

@end
