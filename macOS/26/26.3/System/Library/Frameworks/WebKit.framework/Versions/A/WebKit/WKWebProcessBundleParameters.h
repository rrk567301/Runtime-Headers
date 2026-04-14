@class NSMutableDictionary;

@interface WKWebProcessBundleParameters : NSObject {
    struct RetainPtr<NSMutableDictionary> { NSMutableDictionary *m_ptr; } _parameters;
}

- (id)description;
- (void).cxx_destruct;
- (id)valueForKey:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id).cxx_construct;
- (void)setParameter:(id)a0 forKey:(id)a1;
- (void)setParametersForKeyWithDictionary:(id)a0;

@end
