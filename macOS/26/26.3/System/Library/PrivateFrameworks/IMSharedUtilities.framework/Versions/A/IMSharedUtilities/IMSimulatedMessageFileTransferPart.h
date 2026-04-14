@class NSURL, NSString, IMSandboxedFileURL;

@interface IMSimulatedMessageFileTransferPart : IMSimulatedMessagePart

@property (retain, nonatomic) NSURL *url;
@property (nonatomic) BOOL pluginPayloadAttachment;
@property (retain, nonatomic) NSString *fileName;
@property (retain, nonatomic) NSString *mimeType;
@property (retain, nonatomic) NSString *utiType;
@property (retain, nonatomic) IMSandboxedFileURL *securityURL;
@property (retain, nonatomic) NSString *fallbackHashFileName;
@property (retain, nonatomic) NSString *fallbackMimeType;
@property (retain, nonatomic) NSString *fallbackUTIType;

+ (BOOL)supportsSecureCoding;
+ (id)type;
+ (BOOL)isValidFileURL:(id)a0;
+ (BOOL)isValidBase64DataURL:(id)a0;

- (id)dictionaryRepresentation;
- (id)initWithURL:(id)a0;
- (void)writeToURL:(id)a0 error:(id *)a1;
- (id)initWithDictionaryRepresentation:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isValidURL:(id)a0;
- (id)_initWithURL:(id)a0 fileName:(id)a1 mimeType:(id)a2 utiType:(id)a3 pluginPayloadAttachment:(BOOL)a4;
- (void)calculateFallbackTypeInfo;
- (id)fallbackFileName;
- (id)initWithData:(id)a0 fileName:(id)a1 utType:(id)a2 pluginPayloadAttachment:(BOOL)a3;
- (id)initWithURL:(id)a0 fileName:(id)a1;
- (BOOL)isDataURL;

@end
