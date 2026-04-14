@class NSString, NSDate;

@interface ILCommunication : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *sender;
@property (readonly, copy, nonatomic) NSDate *dateReceived;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithSender:(id)a0 dateReceived:(id)a1;
- (BOOL)isEqualToCommunication:(id)a0;

@end
