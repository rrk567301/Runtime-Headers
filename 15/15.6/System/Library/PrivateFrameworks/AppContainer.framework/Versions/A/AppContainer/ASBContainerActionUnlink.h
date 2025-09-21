@class NSString;

@interface ASBContainerActionUnlink : ASBContainerAction {
    NSString *_pathSpec;
}

- (id)description;
- (void).cxx_destruct;
- (id)initWithPath:(id)a0;
- (char)performWithContainer:(id)a0 usingFileManager:(id)a1 error:(id *)a2;

@end
