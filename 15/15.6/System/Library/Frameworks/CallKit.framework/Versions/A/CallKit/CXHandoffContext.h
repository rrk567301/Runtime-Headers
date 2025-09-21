@class NSString, CXHandle, NSDictionary;

@interface CXHandoffContext : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *handoffIdentifier;
@property (nonatomic, getter=isOutgoing) char outgoing;
@property (copy, nonatomic) CXHandle *remoteHandle;
@property (copy, nonatomic) NSDictionary *context;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;

- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionaryRepresentation:(id)a0;
- (char)isEqualToHandoffContext:(id)a0;
- (id)initWithHandoffIdentifier:(id)a0;

@end
