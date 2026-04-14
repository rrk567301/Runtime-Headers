@class NSString, NSArray;

@interface UXItemSection : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (retain, nonatomic) NSArray *items;
@property (nonatomic) BOOL collapsible;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (unsigned long long)numRows;
- (BOOL)isEqualToSection:(id)a0;

@end
