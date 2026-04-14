@class NSString, NSUUID, NSLocale;

@interface _LTStreamingOutput : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL isFinal;
@property (readonly, nonatomic) NSLocale *locale;
@property (readonly, nonatomic) NSString *translatedText;
@property (readonly, nonatomic) NSString *sourceText;
@property (readonly, copy, nonatomic) NSUUID *sourceIdentifier;

- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithText:(id)a0 sourceText:(id)a1 locale:(id)a2 isFinal:(BOOL)a3 sourceIdentifier:(id)a4;

@end
