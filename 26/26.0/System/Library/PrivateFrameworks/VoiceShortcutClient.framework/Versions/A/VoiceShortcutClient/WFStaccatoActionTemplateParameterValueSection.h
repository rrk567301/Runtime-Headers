@class NSString, WFImage, NSArray;

@interface WFStaccatoActionTemplateParameterValueSection : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (retain, nonatomic) WFImage *image;
@property (copy, nonatomic) NSArray *values;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 subtitle:(id)a1 image:(id)a2 values:(id)a3;
- (BOOL)isEqualToActionTemplateParameterValueSection:(id)a0;

@end
