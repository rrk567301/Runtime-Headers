@class NSString;

@interface TUConversationVirtualParticipant : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long identifier;
@property (readonly, nonatomic) NSString *pluginName;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(unsigned long long)a0 pluginName:(id)a1;
- (char)isEqualToConversationVirtualParticipant:(id)a0;

@end
