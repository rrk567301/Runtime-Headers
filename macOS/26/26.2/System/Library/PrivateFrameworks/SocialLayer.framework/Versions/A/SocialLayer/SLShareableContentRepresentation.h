@class NSString;

@interface SLShareableContentRepresentation : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *typeIdentifier;
@property (readonly, nonatomic) long long preferredRepresentation;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithTypeIdentifier:(id)a0 preferredRepresentation:(long long)a1;

@end
