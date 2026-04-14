@class NSUUID;

@interface TUSmartHoldingRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) NSUUID *callUUID;
@property (readonly, nonatomic) long long requestType;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCallUUID:(id)a0 requestType:(long long)a1;
- (BOOL)isEqualToSession:(id)a0;

@end
