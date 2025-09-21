@class NSString, WFImage, NSArray;

@interface WFStaccatoActionTemplateParameterValueSection : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (retain, nonatomic) WFImage *image;
@property (copy, nonatomic) NSArray *values;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithTitle:(id)a0 subtitle:(id)a1 image:(id)a2 values:(id)a3;
- (char)isEqualToActionTemplateParameterValueSection:(id)a0;

@end
