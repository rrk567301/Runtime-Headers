@class NSString, NSArray;

@interface AXBrailleTranslationResult : NSObject <NSCopying, NSCoding>

@property (readonly, nonatomic) NSString *inputString;
@property (readonly, nonatomic) NSString *resultString;
@property (readonly, nonatomic) NSArray *locationMap;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithInputString:(id)a0 ResultString:(id)a1 locationMap:(id)a2;

@end
