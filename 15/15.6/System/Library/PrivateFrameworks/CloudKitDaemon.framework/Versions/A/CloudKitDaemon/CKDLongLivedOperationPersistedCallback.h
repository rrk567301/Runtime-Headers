@class NSInvocation, Protocol;

@interface CKDLongLivedOperationPersistedCallback : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) Protocol *protocol;
@property (retain, nonatomic) NSInvocation *invocation;
@property (nonatomic) char isCompletionCallback;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_validateInvocation;
- (id)initWithProtocol:(id)a0 invocation:(id)a1 isCompletionCallback:(char)a2;

@end
