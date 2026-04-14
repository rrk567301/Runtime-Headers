@interface BKEventGraphDescriptionAccumulator : NSObject {
    void /* unknown type, empty encoding */ topLevel;
    void /* unknown type, empty encoding */ current;
}

- (id)build;
- (void).cxx_destruct;
- (id)init;
- (void)addSibling:(id)a0;
- (void)addSubnode:(id)a0;
- (void)popSection:(id)a0;
- (id)pushSection;

@end
