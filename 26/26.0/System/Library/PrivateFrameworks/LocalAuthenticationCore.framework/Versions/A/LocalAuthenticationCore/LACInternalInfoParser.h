@class NSDictionary, NSNumber, LACAuditToken;

@interface LACInternalInfoParser : NSObject {
    void /* function */ internalInfo;
}

@property (nonatomic, readonly) NSDictionary *internalInfo;
@property (nonatomic, readonly) LACAuditToken *callerAuditToken;
@property (nonatomic, readonly) NSNumber *userId;
@property (nonatomic, readonly) NSDictionary *options;
@property (nonatomic, readonly) long long policy;

- (id)init;
- (void).cxx_destruct;
- (id)initWithInternalInfo:(id)a0;

@end
