@class NSString;

@interface MADRichLabelClassificationResultItem : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long domain;
@property (readonly, nonatomic) NSString *displayLabel;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithDomain:(unsigned long long)a0 displayLabel:(id)a1;

@end
