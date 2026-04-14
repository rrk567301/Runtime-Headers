@class NSDictionary, NSNumber, LACAuditToken;

@interface LACInternalInfoParser : NSObject {
    void /* function */ internalInfo;
}

@property (nonatomic, readonly) NSDictionary *internalInfo;
@property (nonatomic, readonly) LACAuditToken *callerAuditToken;
@property (nonatomic, readonly) NSNumber *userId;
@property (nonatomic, readonly) NSDictionary *options;
@property (nonatomic, readonly) long long policy;

- (void).cxx_destruct;
- (id)init;
- (id)initWithInternalInfo:(id)a0;

@end
