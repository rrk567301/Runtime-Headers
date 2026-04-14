@class NSString, ISDDataManager;

@interface ISDDataObject : NSObject {
    ISDDataManager *_dataManager;
    unsigned int _anchor;
    NSString *_comment;
    ISDDataObject *_topParent;
}

- (void)setAnchor:(unsigned int)a0;
- (unsigned int)anchor;
- (void)dealloc;
- (id)dataManager;
- (void)setDataManager:(id)a0;
- (id)comment;
- (void)setComment:(id)a0;
- (id)fastDataManager;
- (id)anchorChildren;
- (BOOL)morphInToObject:(id)a0;
- (void)setTopParent:(id)a0;
- (void)setValueFromObject:(id)a0 forKey:(id)a1 didChange:(BOOL *)a2;
- (id)topParent;

@end
