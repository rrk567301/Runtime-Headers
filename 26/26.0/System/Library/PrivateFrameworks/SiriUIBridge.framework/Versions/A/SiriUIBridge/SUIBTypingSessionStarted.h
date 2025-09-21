@class NSUUID;

@interface SUIBTypingSessionStarted : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSUUID *typingSessionId;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithBuilder:(id /* block */)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
