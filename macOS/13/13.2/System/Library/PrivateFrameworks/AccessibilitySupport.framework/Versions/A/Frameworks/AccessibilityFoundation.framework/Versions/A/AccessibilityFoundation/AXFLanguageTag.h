@class NSString, AXFDialectMap;

@interface AXFLanguageTag : NSObject

@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } taggedRange;
@property (readonly, copy, nonatomic) NSString *taggedString;
@property (readonly, copy, nonatomic) NSString *content;
@property (readonly, nonatomic) AXFDialectMap *dialect;
@property (readonly, nonatomic) BOOL createdFromNewline;

- (id)description;
- (void).cxx_destruct;
- (id)initWithDialect:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 content:(id)a2 createdFromNewline:(BOOL)a3;
- (id)basicDescription;

@end
