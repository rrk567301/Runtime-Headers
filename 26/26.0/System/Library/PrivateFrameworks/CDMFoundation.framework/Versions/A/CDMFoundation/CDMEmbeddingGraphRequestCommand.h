@class NSString, SIRINLUEXTERNALRequestID;

@interface CDMEmbeddingGraphRequestCommand : CDMServiceGraphCommand

@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic) SIRINLUEXTERNALRequestID *requestId;

+ (BOOL)supportsSecureCoding;
+ (id)serviceGraphName;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithText:(id)a0;
- (void).cxx_destruct;
- (id)initWithText:(id)a0 requestId:(id)a1;
- (id)loggingRequestID;

@end
