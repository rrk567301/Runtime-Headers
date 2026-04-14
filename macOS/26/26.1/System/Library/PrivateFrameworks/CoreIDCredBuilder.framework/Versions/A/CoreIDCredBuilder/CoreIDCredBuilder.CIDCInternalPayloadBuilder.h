@class NSData, NSError, CIDCPayloadBuilderDetails;

@interface CoreIDCredBuilder.CIDCInternalPayloadBuilder : NSObject {
    void /* unknown type, empty encoding */ payloadBuilder;
}

- (void).cxx_destruct;
- (id)init;
- (void)buildPayloadWithDetails:(CIDCPayloadBuilderDetails *)a0 completionHandler:(void (^)(NSData *, NSError *))a1;
- (id)initWithDelegate:(id)a0 payloadBuilder:(id)a1;

@end
