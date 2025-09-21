@class NSString, CXHandle, NSDictionary;

@interface CXHandoffContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *handoffIdentifier;
@property (nonatomic, getter=isOutgoing) BOOL outgoing;
@property (copy, nonatomic) CXHandle *remoteHandle;
@property (copy, nonatomic) NSDictionary *context;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;

- (id)initWithDictionaryRepresentation:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqualToHandoffContext:(id)a0;
- (id)initWithHandoffIdentifier:(id)a0;

@end
