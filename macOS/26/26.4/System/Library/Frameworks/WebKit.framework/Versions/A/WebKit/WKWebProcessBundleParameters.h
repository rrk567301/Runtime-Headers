@class NSMutableDictionary;

@interface WKWebProcessBundleParameters : NSObject {
    struct RetainPtr<NSMutableDictionary> { NSMutableDictionary *m_ptr; } _parameters;
}

- (id)initWithDictionary:(id)a0;
- (id)valueForKey:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)description;
- (void)setParameter:(id)a0 forKey:(id)a1;
- (void)setParametersForKeyWithDictionary:(id)a0;

@end
