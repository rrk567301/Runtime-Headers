@class NSString, BSServiceConnectionEndpoint;
@protocol OS_xpc_object;

@interface EXConnectionEndpoint : NSObject <NSSecureCoding> {
    void /* function */ identifier;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *service;
@property (nonatomic, readonly) BSServiceConnectionEndpoint *bsServiceConnectionEndpoint;
@property (nonatomic, retain) id<OS_xpc_object> xpcEndpoint;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 xpcEndpoint:(id)a1;
- (id)initWithIdentifier:(id)a0 bsServiceConnectionEndpoint:(id)a1;

@end
