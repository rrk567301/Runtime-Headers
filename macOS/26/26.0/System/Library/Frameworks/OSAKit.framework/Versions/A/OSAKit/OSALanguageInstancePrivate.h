@class OSALanguage, NSAppleEventDescriptor;

@interface OSALanguageInstancePrivate : NSObject {
    OSALanguage *_language;
    struct ComponentInstanceRecord { long long x0[1]; } *_instance;
    BOOL _isComponentInstanceOwner;
    NSAppleEventDescriptor *_defaultTarget;
}

- (void)finalize;
- (void)dealloc;
- (id)initWithLanguage:(id)a0;

@end
