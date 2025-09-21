@class NSString;

@interface _WKTextRun : NSObject <WKObject> {
    struct AlignedStorage<API::TextRun, 8UL> { struct Storage { unsigned char data[48]; } m_storage; } _textRun;
}

@property (readonly, copy, nonatomic) NSString *text;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } rectInWebView;
@property (readonly) struct Object { void /* function */ **x0; void *x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;

@end
