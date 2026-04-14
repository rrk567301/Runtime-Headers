@class NSData, NSError, CIDCPayloadBuilderDetails;

@interface CoreIDCredBuilder.CIDCInternalPayloadBuilder : NSObject {
    void /* unknown type, empty encoding */ payloadBuilder;
}

- (id)init;
- (void).cxx_destruct;
- (void)buildPayloadWithDetails:(CIDCPayloadBuilderDetails *)a0 completionHandler:(void (^)(NSData *, NSError *))a1;
- (id)initWithDelegate:(id)a0 payloadBuilder:(id)a1;

@end
