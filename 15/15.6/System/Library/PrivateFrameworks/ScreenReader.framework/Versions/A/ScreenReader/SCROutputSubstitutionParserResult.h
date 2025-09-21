@interface SCROutputSubstitutionParserResult : NSObject

@property (readonly, nonatomic) char shouldPresent;
@property (readonly, nonatomic) unsigned long long length;
@property (readonly, nonatomic) unsigned long long kind;

- (id)initWithLength:(unsigned long long)a0 kind:(unsigned long long)a1 shouldPresent:(char)a2;

@end
