@interface SCRBomArchiver : NSObject {
    struct _BOMCopier { } *bom;
}

- (id)init;
- (void)dealloc;
- (id)archive:(id)a0;
- (id)uniqueLogPath;

@end
