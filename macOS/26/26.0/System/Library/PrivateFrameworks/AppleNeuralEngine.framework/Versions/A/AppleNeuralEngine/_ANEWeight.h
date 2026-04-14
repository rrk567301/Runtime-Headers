@class NSURL, NSString, NSData;

@interface _ANEWeight : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSURL *weightURL;
@property (readonly, copy, nonatomic) NSString *weightSymbol;
@property (readonly, copy, nonatomic) NSData *SHACode;
@property (copy, nonatomic) NSString *sandboxExtension;

+ (id)new;
+ (id)weightWithSymbolAndURL:(id)a0 weightURL:(id)a1;
+ (id)weightWithSymbolAndURLSHA:(id)a0 weightURL:(id)a1 SHACode:(id)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithWeightSymbolAndURL:(id)a0 weightURL:(id)a1;
- (id)initWithWeightSymbolAndURLSHA:(id)a0 weightURL:(id)a1 SHACode:(id)a2 sandboxExtension:(id)a3;
- (void)updateWeightURL:(id)a0;

@end
