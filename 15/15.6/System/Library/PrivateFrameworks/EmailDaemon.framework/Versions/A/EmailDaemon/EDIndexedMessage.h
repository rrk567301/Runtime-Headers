@interface EDIndexedMessage : NSObject

@property (nonatomic, readonly) void /* unknown type, empty encoding */ messageID;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ hasBodyData;
@property (nonatomic, readonly) long long hash;

- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithMessageID:(id)a0 hasBodyData:(char)a1;

@end
