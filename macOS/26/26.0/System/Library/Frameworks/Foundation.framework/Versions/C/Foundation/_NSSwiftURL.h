@class NSString, NSURL, NSData, NSNumber;

@interface _NSSwiftURL : _NSURLBridge {
    void /* unknown type, empty encoding */ url;
    void /* unknown type, empty encoding */ string;
    void /* unknown type, empty encoding */ isDecomposable;
    void /* unknown type, empty encoding */ hasNetLocation;
    void /* unknown type, empty encoding */ hasPath;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *_originalString;
@property (nonatomic, readonly) unsigned int _encoding;
@property (nonatomic) void *_resourceInfoPtr;
@property (nonatomic, readonly) NSURL *_compatibilityAbsoluteURL;
@property (nonatomic, readonly) BOOL _isDecomposable;
@property (nonatomic, readonly) NSString *_netLocation;
@property (nonatomic, readonly) NSString *_cfurlResourceSpecifier;
@property (nonatomic, readonly) Class classForCoder;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSData *dataRepresentation;
@property (nonatomic, readonly) NSString *absoluteString;
@property (nonatomic, readonly) NSString *relativeString;
@property (nonatomic, readonly) NSURL *baseURL;
@property (nonatomic, readonly) NSURL *absoluteURL;
@property (nonatomic, readonly) NSString *scheme;
@property (nonatomic, readonly) NSString *resourceSpecifier;
@property (nonatomic, readonly) NSString *user;
@property (nonatomic, readonly) NSString *password;
@property (nonatomic, readonly) NSString *host;
@property (nonatomic, readonly) NSNumber *port;
@property (nonatomic, readonly) NSString *path;
@property (nonatomic, readonly) NSString *relativePath;
@property (nonatomic, readonly) NSString *query;
@property (nonatomic, readonly) NSString *fragment;
@property (nonatomic, readonly) BOOL hasDirectoryPath;
@property (nonatomic, readonly) BOOL fileURL;
@property (nonatomic, readonly) NSURL *standardizedURL;
@property (nonatomic, readonly) NSString *_lastPathComponent;
@property (nonatomic, readonly) NSURL *URLByDeletingLastPathComponent;
@property (nonatomic, readonly) NSURL *URLByDeletingPathExtension;

- (id)init;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)_query:(id)a0;
- (id)_URLByAppendingPathComponent:(id)a0 isDirectory:(BOOL)a1 encodingSlashes:(BOOL)a2;
- (id)_fileSystemPath:(long long)a0 resolveAgainstBase:(BOOL)a1;
- (id)_fragment:(id)a0;
- (id)_host:(BOOL)a0;
- (id)_password:(BOOL)a0;
- (struct { long long x0; long long x1; })_rangeForComponent:(long long)a0 rangeIncludingSeparators:(struct { long long x0; long long x1; } *)a1;
- (id)_relativePath:(BOOL)a0;
- (id)_user:(BOOL)a0;
- (BOOL)isFileReferenceURL;
- (BOOL)isFileURL;
- (id)_URLByAppendingPathExtension:(id)a0;

@end
