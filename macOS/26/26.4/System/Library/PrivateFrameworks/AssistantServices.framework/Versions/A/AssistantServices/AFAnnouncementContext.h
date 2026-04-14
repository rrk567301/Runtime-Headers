@class NSDate;

@interface AFAnnouncementContext : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long platform;
@property (readonly, nonatomic) long long notificationType;
@property (readonly, copy, nonatomic) NSDate *lastAnnouncementTimestamp;
@property (readonly, nonatomic) BOOL isSameAppIdAsLastAnnounce;

+ (id)newWithBuilder:(id /* block */)a0;

- (id)mutatedCopyWithMutator:(id /* block */)a0;
- (id)initWithBuilder:(id /* block */)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_descriptionWithIndent:(unsigned long long)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithPlatform:(long long)a0 notificationType:(long long)a1 lastAnnouncementTimestamp:(id)a2 isSameAppIdAsLastAnnounce:(BOOL)a3;

@end
