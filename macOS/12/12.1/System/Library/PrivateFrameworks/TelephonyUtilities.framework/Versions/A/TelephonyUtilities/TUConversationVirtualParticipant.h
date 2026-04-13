@class NSString;

@interface TUConversationVirtualParticipant : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long identifier;
@property (readonly, nonatomic) NSString *pluginName;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqualToConversationVirtualParticipant:(id)a0;
- (id)initWithIdentifier:(unsigned long long)a0 pluginName:(id)a1;

@end
