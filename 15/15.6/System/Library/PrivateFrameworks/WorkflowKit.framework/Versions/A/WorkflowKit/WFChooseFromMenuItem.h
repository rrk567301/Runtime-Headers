@class NSString, NSArray;

@interface WFChooseFromMenuItem : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSString *string;
@property (readonly, nonatomic) NSArray *synonyms;
@property (readonly, nonatomic) NSString *subtitle;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithString:(id)a0 synonyms:(id)a1 subtitle:(id)a2;

@end
