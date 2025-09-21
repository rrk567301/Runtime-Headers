@class NSString;

@interface DDPhoneOrMailURI : NSObject {
    NSString *_value;
    BOOL _isMailScheme;
    BOOL _isHttpScheme;
    BOOL _isFileScheme;
}

+ (id)URIWithString:(id)a0;

- (BOOL)isMail;
- (BOOL)isPhone;
- (id)value;
- (id)initWithString:(id)a0;
- (void).cxx_destruct;
- (BOOL)isFile;
- (BOOL)isHttp;

@end
