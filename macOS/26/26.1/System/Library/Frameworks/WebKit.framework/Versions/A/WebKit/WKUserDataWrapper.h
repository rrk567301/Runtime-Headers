@interface WKUserDataWrapper : NSObject {
    struct RefPtr<API::Object, WTF::RawPtrTraits<API::Object>, WTF::DefaultRefDerefTraits<API::Object>> { struct Object *m_ptr; } _webUserData;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct Object { void /* function */ **x0; void *x1; } *)userData;
- (id)initWithUserData:(struct Object { void /* function */ **x0; void *x1; } *)a0;

@end
