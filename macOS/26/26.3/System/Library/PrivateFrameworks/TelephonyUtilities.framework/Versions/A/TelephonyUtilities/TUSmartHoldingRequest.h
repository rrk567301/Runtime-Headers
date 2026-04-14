@class NSUUID;

@interface TUSmartHoldingRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) NSUUID *callUUID;
@property (readonly, nonatomic) long long requestType;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCallUUID:(id)a0 requestType:(long long)a1;
- (BOOL)isEqualToSession:(id)a0;

@end
