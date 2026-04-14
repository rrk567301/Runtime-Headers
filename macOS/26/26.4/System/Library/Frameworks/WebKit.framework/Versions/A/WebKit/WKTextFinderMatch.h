@class NSView, NSArray, NSString;

@interface WKTextFinderMatch : NSObject <NSTextFinderAsynchronousDocumentFindMatch> {
    struct WeakObjCPtr<WKTextFinderClient> { id m_weakReference; } _client;
    struct WeakObjCPtr<NSView> { id m_weakReference; } _view;
    struct RetainPtr<NSArray> { NSArray *m_ptr; } _rects;
    unsigned int _index;
}

@property (readonly, nonatomic) unsigned int index;
@property (readonly, retain, nonatomic) NSView *containingView;
@property (readonly, retain, nonatomic) NSArray *textRects;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
