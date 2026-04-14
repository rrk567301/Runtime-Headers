@class NSString, NSArray;

@interface CSExternalAnalysisTag : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *label;
@property (copy) NSArray *synonyms;
@property double confidence;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void)encodeWithCSCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithLabel:(id)a0 synonyms:(id)a1 confidence:(double)a2;

@end
