@class NSString;

@interface QLUTIAnalyzer : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly) NSString *contentType;

+ (id)UTIForURL:(id)a0;
+ (id)privateContentTypeFromFileName:(id)a0;
+ (id)knownExtensions;
+ (id)contentTypeForURL:(id)a0;
+ (char)isContentTypeAudioOnly:(id)a0;
+ (char)isTypeAudioOnly:(id)a0;
+ (id)removeSpacesFromString:(id)a0;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithURL:(id)a0;
- (id)initWithContentType:(id)a0;
- (char)isAudioOnly;

@end
