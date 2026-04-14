@class NSMutableDictionary;

@interface WKWebProcessBundleParameters : NSObject {
    struct RetainPtr<NSMutableDictionary> { NSMutableDictionary *m_ptr; } _parameters;
}

- (id)initWithDictionary:(id)a0;
- (id)valueForKey:(id)a0;
- (id)description;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)setParameter:(id)a0 forKey:(id)a1;
- (void)setParametersForKeyWithDictionary:(id)a0;

@end
