@class NSArray, CNGeminiChannel;

@interface CNGeminiResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) CNGeminiChannel *channel;
@property (readonly) long long usage;
@property (readonly) NSArray *availableChannels;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithChannel:(id)a0 usage:(long long)a1 availableChannels:(id)a2;

@end
