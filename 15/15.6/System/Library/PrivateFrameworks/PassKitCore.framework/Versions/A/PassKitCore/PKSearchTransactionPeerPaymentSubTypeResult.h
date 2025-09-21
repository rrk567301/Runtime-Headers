@class NSString;

@interface PKSearchTransactionPeerPaymentSubTypeResult : NSObject <PKSearchAutocompleteToken>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) long long subType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)tokenType;

@end
