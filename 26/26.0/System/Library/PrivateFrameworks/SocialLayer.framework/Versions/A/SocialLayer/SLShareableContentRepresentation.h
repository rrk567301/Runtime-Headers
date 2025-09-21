@class NSString;

@interface SLShareableContentRepresentation : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *typeIdentifier;
@property (readonly, nonatomic) long long preferredRepresentation;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithTypeIdentifier:(id)a0 preferredRepresentation:(long long)a1;

@end
