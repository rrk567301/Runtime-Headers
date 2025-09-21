@class NSString, TIInputContextHistory;

@interface WTSmartReplyConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *baseResponse;
@property (retain, nonatomic) NSString *entryPoint;
@property (readonly, nonatomic) TIInputContextHistory *inputContextHistory;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithInputContextHistory:(id)a0;

@end
