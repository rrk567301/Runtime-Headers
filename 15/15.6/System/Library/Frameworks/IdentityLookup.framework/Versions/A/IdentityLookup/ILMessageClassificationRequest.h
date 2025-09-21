@class NSArray;

@interface ILMessageClassificationRequest : ILClassificationRequest <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *messageCommunications;

- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)isEqualToRequest:(id)a0;
- (id)initWithMessageCommunications:(id)a0;

@end
