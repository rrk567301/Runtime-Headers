@class WFContentCollection;

@interface WFConditionalSubjectValue : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) WFContentCollection *content;
@property (readonly, nonatomic) long long contentType;
@property (readonly, nonatomic, getter=isCaseInsensitive) char caseInsensitive;
@property (readonly, nonatomic) unsigned long long comparableTimeUnits;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithContent:(id)a0 contentType:(long long)a1 caseInsensitive:(char)a2 comparableTimeUnits:(unsigned long long)a3;

@end
