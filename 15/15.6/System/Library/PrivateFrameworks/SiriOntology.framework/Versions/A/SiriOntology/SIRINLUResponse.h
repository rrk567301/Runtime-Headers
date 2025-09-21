@class NSArray, SIRINLURequestID, SIRINLUResponseStatus;

@interface SIRINLUResponse : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) SIRINLURequestID *requestId;
@property (retain, nonatomic) NSArray *parses;
@property (retain, nonatomic) SIRINLUResponseStatus *responseStatus;
@property (retain, nonatomic) NSArray *repetitionResults;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithRequestId:(id)a0 parses:(id)a1;
- (id)initWithRequestId:(id)a0 parses:(id)a1 repetitionResults:(id)a2;

@end
