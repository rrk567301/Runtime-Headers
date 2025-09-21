@class NSData, NSArray;

@interface SCRO2DBrailleData : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSData *imageData;
@property (readonly, nonatomic) NSArray *strings;
@property (readonly, nonatomic) long long focusedIndex;
@property (readonly, nonatomic) char truncateStrings;
@property (readonly, nonatomic) char alignAtTop;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithImageData:(id)a0;
- (id)initWithStrings:(id)a0 focusedIndex:(long long)a1 truncateStrings:(char)a2 alignAtTop:(char)a3;

@end
