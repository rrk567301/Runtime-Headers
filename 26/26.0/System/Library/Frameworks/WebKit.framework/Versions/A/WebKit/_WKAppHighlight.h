@class NSData, NSString, NSImage;

@interface _WKAppHighlight : NSObject {
    struct RetainPtr<NSData> { NSData *m_ptr; } _highlight;
    struct RetainPtr<NSString> { NSString *m_ptr; } _text;
    struct RetainPtr<NSImage> { NSImage *m_ptr; } _image;
}

@property (readonly, nonatomic) NSData *highlight;
@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic) NSImage *image;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithHighlight:(id)a0 text:(id)a1 image:(id)a2;

@end
