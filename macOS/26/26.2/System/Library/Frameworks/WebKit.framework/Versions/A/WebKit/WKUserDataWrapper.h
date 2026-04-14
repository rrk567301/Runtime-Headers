@interface WKUserDataWrapper : NSObject {
    struct RefPtr<API::Object, WTF::RawPtrTraits<API::Object>, WTF::DefaultRefDerefTraits<API::Object>> { struct Object *m_ptr; } _webUserData;
}

- (struct Object { void /* function */ **x0; void *x1; } *)userData;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithUserData:(struct Object { void /* function */ **x0; void *x1; } *)a0;

@end
