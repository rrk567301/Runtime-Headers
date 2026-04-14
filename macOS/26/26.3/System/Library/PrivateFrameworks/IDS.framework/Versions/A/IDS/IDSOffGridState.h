@class IDSURI, IDSPushToken;

@interface IDSOffGridState : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) IDSURI *uri;
@property (readonly, nonatomic) IDSPushToken *pushToken;
@property (readonly, nonatomic) long long offGridStatus;

- (id)debugDescription;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithOffGridStatus:(long long)a0 forURI:(id)a1 pushToken:(id)a2;

@end
