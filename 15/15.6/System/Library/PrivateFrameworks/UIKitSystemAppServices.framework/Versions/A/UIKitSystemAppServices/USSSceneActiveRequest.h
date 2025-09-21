@class NSString;

@interface USSSceneActiveRequest : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic, getter=isForeground) char foreground;
@property (readonly, nonatomic, getter=isActive) char active;

+ (id)sceneActiveRequestForScene:(id)a0 isForegroundApp:(char)a1 isActiveApp:(char)a2;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initCommon;

@end
