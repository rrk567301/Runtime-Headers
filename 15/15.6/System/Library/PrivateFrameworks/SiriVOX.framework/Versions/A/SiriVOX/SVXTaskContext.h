@class NSUUID, NSString, SVXDeactivationContext, NSError, SVXActivationContext, SAUIListenAfterSpeakingBehavior;

@interface SVXTaskContext : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) long long origin;
@property (readonly, nonatomic) unsigned long long timestamp;
@property (readonly, copy, nonatomic) NSUUID *sessionUUID;
@property (readonly, copy, nonatomic) NSUUID *requestUUID;
@property (readonly, copy, nonatomic) NSString *aceId;
@property (readonly, copy, nonatomic) NSString *refId;
@property (readonly, copy, nonatomic) NSString *dialogIdentifier;
@property (readonly, copy, nonatomic) NSString *dialogPhase;
@property (readonly, nonatomic) char isUUFR;
@property (readonly, nonatomic) char listensAfterSpeaking;
@property (readonly, copy, nonatomic) SAUIListenAfterSpeakingBehavior *listenAfterSpeakingBehavior;
@property (readonly, copy, nonatomic) SVXActivationContext *activationContext;
@property (readonly, copy, nonatomic) SVXDeactivationContext *deactivationContext;
@property (readonly, copy, nonatomic) NSError *error;

+ (id)newWithBuilder:(id /* block */)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_descriptionWithIndent:(unsigned long long)a0;
- (id)mutatedCopyWithMutator:(id /* block */)a0;
- (id)initWithOrigin:(long long)a0 timestamp:(unsigned long long)a1 sessionUUID:(id)a2 requestUUID:(id)a3 aceId:(id)a4 refId:(id)a5 dialogIdentifier:(id)a6 dialogPhase:(id)a7 isUUFR:(char)a8 listensAfterSpeaking:(char)a9 listenAfterSpeakingBehavior:(id)a10 activationContext:(id)a11 deactivationContext:(id)a12 error:(id)a13;

@end
