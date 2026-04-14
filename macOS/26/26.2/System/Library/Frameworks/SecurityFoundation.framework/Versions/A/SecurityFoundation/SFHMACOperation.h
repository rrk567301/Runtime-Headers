@protocol SFDigestOperation;

@interface SFHMACOperation : SFMessageAuthenticationCodeOperation {
    id _hmacOperationInternal;
}

@property (copy, nonatomic) id<SFDigestOperation> digestOperation;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithDigestOperation:(id)a0;

@end
