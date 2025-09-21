@class NSString, NSArray;

@interface CSExternalAnalysisTag : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *label;
@property (copy) NSArray *synonyms;
@property double confidence;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCSCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithLabel:(id)a0 synonyms:(id)a1 confidence:(double)a2;

@end
