@class NSString, TUHandle;

@interface TUConversationLinkOriginator : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) TUHandle *handle;
@property (nonatomic) long long revision;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 revision:(long long)a1 handle:(id)a2;
- (char)isEqualToConversationLinkOriginator:(id)a0;

@end
