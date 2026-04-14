@class NSString;

@interface PKHandwritingTool : PKTool

@property (readonly, nonatomic) NSString *localeIdentifier;

- (id)init;
- (void).cxx_destruct;
- (id)initWithLocaleIdentifier:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (BOOL)_isHandwritingTool;

@end
