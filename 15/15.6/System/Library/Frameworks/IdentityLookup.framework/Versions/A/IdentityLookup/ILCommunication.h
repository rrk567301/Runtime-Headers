@class NSString, NSDate;

@interface ILCommunication : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *sender;
@property (readonly, copy, nonatomic) NSDate *dateReceived;

- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSender:(id)a0 dateReceived:(id)a1;
- (char)isEqualToCommunication:(id)a0;

@end
