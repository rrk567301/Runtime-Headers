@class SIRINLUEXTERNALRequestID, SIRINLUEXTERNALCDM_PLANNERCdmPlannerRequest;

@interface CDMPlannerGraphRequestCommand : CDMServiceGraphProtoBackedCommand

@property (readonly, nonatomic) SIRINLUEXTERNALCDM_PLANNERCdmPlannerRequest *plannerRequest;
@property (readonly, nonatomic) SIRINLUEXTERNALRequestID *requestId;

+ (BOOL)supportsSecureCoding;
+ (id)serviceGraphName;
+ (id)innerProtoPropertyName;
+ (Class)innerProtoType;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithPlannerRequest:(id)a0;
- (id)loggingRequestID;

@end
