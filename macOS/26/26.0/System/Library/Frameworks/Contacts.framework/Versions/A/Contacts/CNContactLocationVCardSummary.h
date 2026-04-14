@class NSString;

@interface CNContactLocationVCardSummary : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *descriptiveLabel;
@property (readonly, copy, nonatomic) NSString *urlString;

- (id)initWithData:(id)a0 error:(id *)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 URLString:(id)a1;

@end
