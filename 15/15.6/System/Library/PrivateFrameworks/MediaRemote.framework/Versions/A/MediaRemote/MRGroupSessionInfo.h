@class _MRGroupSessionInfoProtobuf, NSString, MRGroupSessionHostInfo;

@interface MRGroupSessionInfo : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) _MRGroupSessionInfoProtobuf *protobuf;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *effectiveIdentifier;
@property (readonly, nonatomic) NSString *equivalentMediaIdentifier;
@property (readonly, nonatomic) MRGroupSessionHostInfo *hostInfo;
@property (readonly, nonatomic) char isHosted;
@property (readonly, nonatomic, getter=isPlaceholder) char placeholder;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 hostInfo:(id)a1 isHosted:(char)a2 equivalentMediaIdentifier:(id)a3 isPlaceholder:(char)a4;
- (id)initWithProtobuf:(id)a0;
- (id)initWithToken:(id)a0 isHosted:(char)a1;
- (id)initWithToken:(id)a0 isHosted:(char)a1 isPlaceholder:(char)a2;

@end
