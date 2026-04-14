@class NSString;

@interface AFASRSharedUserInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *sharedUserId;
@property (readonly, copy, nonatomic) NSString *loggableSharedUserId;
@property (readonly, copy, nonatomic) NSString *loggableUserIdHash;
@property (readonly, copy, nonatomic) NSString *personaId;

+ (id)newWithBuilder:(id /* block */)a0;

- (id)initWithBuilder:(id /* block */)a0;
- (id)_descriptionWithIndent:(unsigned long long)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)mutatedCopyWithMutator:(id /* block */)a0;
- (id)initWithSharedUserId:(id)a0 loggableSharedUserId:(id)a1 loggableUserIdHash:(id)a2 personaId:(id)a3;

@end
