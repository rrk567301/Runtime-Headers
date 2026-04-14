@class JSOCType;

@interface JSOCTypeReference : JSOCTypePointer {
    JSOCType *_referencedType;
}

- (const char *)objCType;
- (void).cxx_destruct;
- (id)initWithReferencedType:(id)a0;
- (id)deref;

@end
