@class NSString, SFColor;

@interface PRSAuxiliaryInfo : NSObject

@property (retain, nonatomic) NSString *top_text;
@property (retain, nonatomic) NSString *middle_text;
@property (retain, nonatomic) NSString *bottom_text;
@property (retain, nonatomic) SFColor *bottom_text_color;
@property (nonatomic) int align;

+ (BOOL)supportsSecureCoding;

- (id)initWithData:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
