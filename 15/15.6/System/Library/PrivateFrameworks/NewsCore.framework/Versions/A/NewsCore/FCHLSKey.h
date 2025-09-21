@class NSURL, NSString;

@interface FCHLSKey : NSObject {
    long long _method;
    NSURL *_url;
    NSString *_keyFormat;
    NSString *_keyFormatVersions;
    NSString *_iv;
}

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;

@end
