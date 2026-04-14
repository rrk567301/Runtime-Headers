@class NSString;

@interface DDPhoneOrMailURI : NSObject {
    NSString *_value;
    BOOL _isMailScheme;
    BOOL _isHttpScheme;
    BOOL _isFileScheme;
}

+ (id)URIWithString:(id)a0;

- (BOOL)isMail;
- (void).cxx_destruct;
- (id)initWithString:(id)a0;
- (BOOL)isPhone;
- (id)value;
- (BOOL)isFile;
- (BOOL)isHttp;

@end
