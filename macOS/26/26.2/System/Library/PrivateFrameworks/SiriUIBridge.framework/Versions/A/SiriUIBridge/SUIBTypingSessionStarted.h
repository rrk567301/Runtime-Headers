@class NSUUID;

@interface SUIBTypingSessionStarted : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSUUID *typingSessionId;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithBuilder:(id /* block */)a0;
- (id)init;

@end
