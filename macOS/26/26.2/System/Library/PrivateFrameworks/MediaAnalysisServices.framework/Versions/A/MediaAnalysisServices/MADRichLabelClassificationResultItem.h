@class NSString;

@interface MADRichLabelClassificationResultItem : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long domain;
@property (readonly, nonatomic) NSString *displayLabel;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithDomain:(unsigned long long)a0 displayLabel:(id)a1;

@end
