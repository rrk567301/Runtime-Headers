@interface WebUndoStep : NSObject {
    struct RefPtr<WebCore::UndoStep, WTF::RawPtrTraits<WebCore::UndoStep>, WTF::DefaultRefDerefTraits<WebCore::UndoStep>> { struct UndoStep *m_ptr; } m_step;
}

+ (void)initialize;
+ (id)stepWithUndoStep:(void *)a0;

- (void).cxx_destruct;
- (void *)step;
- (void)dealloc;
- (id).cxx_construct;
- (id)initWithUndoStep:(void *)a0;

@end
