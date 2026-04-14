@class NSString, NSArray;

@interface CSExternalAnalysisTag : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *label;
@property (copy) NSArray *synonyms;
@property double confidence;

- (void)encodeWithCSCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithLabel:(id)a0 synonyms:(id)a1 confidence:(double)a2;

@end
