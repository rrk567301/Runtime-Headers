@class NSDictionary;

@interface DUPersonalIDResult : NSObject <NSSecureCoding, NSCopying> {
    NSDictionary *_extractedAttributes;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) char isPartialExtraction;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithResultType:(long long)a0 attributes:(id)a1 isPartialExtraction:(char)a2;
- (id)dateFromString:(id)a0 forAttributeKey:(id)a1;
- (id)spotlightOntologyAttributes;

@end
