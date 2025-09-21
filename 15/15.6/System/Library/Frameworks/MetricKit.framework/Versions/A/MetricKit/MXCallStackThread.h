@class NSArray;

@interface MXCallStackThread : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly) char attributedThread;
@property (readonly) NSArray *topFrames;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)toDictionary;
- (id)initWithTopCallStackFrames:(id)a0 isAttributedThread:(char)a1;

@end
