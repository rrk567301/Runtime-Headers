@class NSString;

@interface ASBContainerActionUnlink : ASBContainerAction {
    NSString *_pathSpec;
}

- (void).cxx_destruct;
- (id)description;
- (id)initWithPath:(id)a0;
- (BOOL)performWithContainer:(id)a0 usingFileManager:(id)a1 error:(id *)a2;

@end
