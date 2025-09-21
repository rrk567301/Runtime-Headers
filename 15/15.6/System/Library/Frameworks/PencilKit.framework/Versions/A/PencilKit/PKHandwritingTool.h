@class NSString;

@interface PKHandwritingTool : PKTool

@property (readonly, nonatomic) NSString *localeIdentifier;

- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithLocaleIdentifier:(id)a0;
- (char)_isHandwritingTool;

@end
