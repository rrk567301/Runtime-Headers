@class NSString, NSData;

@interface SRDPrescribedActionDescriptor : NSObject <NSSecureCoding, NSCoding> {
    void /* function */ toolID;
    void /* function */ parametersData;
    void /* function */ additionalContentData;
    void /* function */ actionTraceID;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, copy) NSString *toolID;
@property (nonatomic, copy) NSData *parametersData;
@property (nonatomic, copy) NSData *additionalContentData;
@property (nonatomic, copy) NSString *actionTraceID;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithToolID:(id)a0 parametersData:(id)a1 additionalContentData:(id)a2 actionTraceID:(id)a3;

@end
