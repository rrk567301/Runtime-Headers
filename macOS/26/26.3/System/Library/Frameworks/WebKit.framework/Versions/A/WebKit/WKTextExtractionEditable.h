@class NSString;

@interface WKTextExtractionEditable : NSObject {
    void /* function */ label;
    void /* function */ placeholder;
    void /* unknown type, empty encoding */ backingIsSecure;
    void /* unknown type, empty encoding */ backingIsFocused;
}

@property (nonatomic, readonly) NSString *label;
@property (nonatomic, readonly) NSString *placeholder;
@property (nonatomic, readonly) BOOL secure;
@property (nonatomic, readonly) BOOL focused;

- (BOOL)isFocused;
- (BOOL)isSecure;
- (id)init;
- (void).cxx_destruct;
- (id)initWithLabel:(id)a0 placeholder:(id)a1 isSecure:(BOOL)a2 isFocused:(BOOL)a3;

@end
