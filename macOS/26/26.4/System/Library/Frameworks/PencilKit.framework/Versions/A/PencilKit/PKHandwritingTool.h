@class NSString;

@interface PKHandwritingTool : PKTool

@property (readonly, nonatomic) NSString *localeIdentifier;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithLocaleIdentifier:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (BOOL)_isHandwritingTool;

@end
