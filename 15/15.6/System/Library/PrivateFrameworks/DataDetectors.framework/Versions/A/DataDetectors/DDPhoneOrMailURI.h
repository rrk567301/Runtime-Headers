@class NSString;

@interface DDPhoneOrMailURI : NSObject {
    NSString *_value;
    char _isMailScheme;
    char _isHttpScheme;
    char _isFileScheme;
}

+ (id)URIWithString:(id)a0;

- (void).cxx_destruct;
- (id)initWithString:(id)a0;
- (id)value;
- (char)isFile;
- (char)isMail;
- (char)isPhone;
- (char)isHttp;

@end
