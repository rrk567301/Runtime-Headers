@class NSURL;

@interface _WKSpatialBackdropSource : NSObject {
    struct RetainPtr<NSURL> { NSURL *m_ptr; } m_sourceURL;
    struct RetainPtr<NSURL> { NSURL *m_ptr; } m_modelURL;
    struct RetainPtr<NSURL> { NSURL *m_ptr; } m_environmentMapURL;
}

@property (readonly, nonatomic) NSURL *sourceURL;
@property (readonly, nonatomic) NSURL *modelURL;
@property (readonly, nonatomic) NSURL *environmentMapURL;

- (void).cxx_destruct;
- (id).cxx_construct;

@end
