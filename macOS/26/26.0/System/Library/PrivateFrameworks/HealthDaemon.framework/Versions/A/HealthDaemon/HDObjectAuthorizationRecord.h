@class NSUUID;

@interface HDObjectAuthorizationRecord : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSUUID *objectUUID;
@property (copy, nonatomic) NSUUID *sourceUUID;
@property (copy, nonatomic) NSUUID *sessionUUID;
@property (nonatomic) long long status;
@property (nonatomic) double modificationDate;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
