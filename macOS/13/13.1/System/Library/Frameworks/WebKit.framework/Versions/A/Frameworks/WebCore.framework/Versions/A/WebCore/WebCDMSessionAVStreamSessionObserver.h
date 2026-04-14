@interface WebCDMSessionAVStreamSessionObserver : NSObject {
    void *m_parent;
}

- (id)initWithParent:(void *)a0;
- (void)contentProtectionSessionIdentifierChanged:(id)a0;

@end
