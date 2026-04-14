@class NSString;

@interface GTUnsupportedFenumInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *fenum;
@property (readonly, nonatomic) NSString *category;
@property (readonly, nonatomic) NSString *customMessage;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)reason;
- (id)initWithFenum:(id)a0 category:(id)a1 customMessage:(id)a2;

@end
