@class NSString, NSData, PKColor, PKImage;

@interface PKPassFieldImage : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *imageName;
@property (readonly, copy, nonatomic) NSString *symbolName;
@property (readonly, nonatomic) long long tintColor;
@property (readonly, nonatomic) PKImage *image;
@property (readonly, copy, nonatomic) NSData *imageHash;
@property (readonly, nonatomic) PKColor *backgroundColor;
@property (readonly, nonatomic) BOOL allowInternalSymbols;

+ (id)createForDictionary:(id)a0 bundle:(id)a1 privateBundle:(id)a2 passType:(unsigned long long)a3;

- (id)_init;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
