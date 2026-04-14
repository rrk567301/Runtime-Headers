@class NSDictionary;

@interface DUPersonalIDResult : NSObject <NSSecureCoding, NSCopying> {
    NSDictionary *_extractedAttributes;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) BOOL isPartialExtraction;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithResultType:(long long)a0 attributes:(id)a1 isPartialExtraction:(BOOL)a2;
- (id)dateFromString:(id)a0 forAttributeKey:(id)a1;
- (id)spotlightOntologyAttributes;

@end
