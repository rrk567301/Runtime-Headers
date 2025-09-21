@class NSString;

@interface ASBContainerActionUnlink : ASBContainerAction {
    NSString *_pathSpec;
}

- (id)initWithPath:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)performWithContainer:(id)a0 usingFileManager:(id)a1 error:(id *)a2;

@end
