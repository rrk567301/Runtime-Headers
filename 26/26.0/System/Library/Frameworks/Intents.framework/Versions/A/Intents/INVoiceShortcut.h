@class NSUUID, NSString, INShortcut;

@interface INVoiceShortcut : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSUUID *identifier;
@property (readonly, copy) NSString *invocationPhrase;
@property (readonly, copy) INShortcut *shortcut;

- (id)initWithUserActivity:(id)a0;
- (id)intent;
- (id)userActivity;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithIntent:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)_initWithIdentifier:(id)a0 invocationPhrase:(id)a1 shortcut:(id)a2;
- (id)_initWithVCVoiceShortcut:(id)a0;

@end
