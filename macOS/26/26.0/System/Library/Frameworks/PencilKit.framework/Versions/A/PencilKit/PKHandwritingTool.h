@class NSString;

@interface PKHandwritingTool : PKTool

@property (readonly, nonatomic) NSString *localeIdentifier;

- (id)init;
- (id)initWithLocaleIdentifier:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)_isHandwritingTool;

@end
