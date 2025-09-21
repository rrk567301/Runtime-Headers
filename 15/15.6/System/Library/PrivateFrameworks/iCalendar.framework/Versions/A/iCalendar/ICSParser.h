@class NSData, ICSTokenizer;
@protocol ICSUIDGenerator;

@interface ICSParser : NSObject {
    unsigned long long _options;
    NSData *_data;
    id<ICSUIDGenerator> _uidGenerator;
}

@property (readonly, nonatomic) ICSTokenizer *lexer;

+ (id)entitiesFromNSData:(id)a0 options:(unsigned long long)a1;

- (void).cxx_destruct;
- (id)initWithData:(id)a0 options:(unsigned long long)a1;
- (char)_parseComponent:(id)a0;
- (void)_parseComponent:(id)a0 depth:(unsigned long long)a1 fatalError:(char *)a2;
- (char)createPropertyType:(int)a0 component:(id)a1 withName:(id)a2 fatalError:(char *)a3;
- (id)makeComponent:(const char *)a0;
- (id)parseData;
- (char)parseParameter:(id)a0 fatalError:(char *)a1;
- (char)parseProperty:(id)a0 fatalError:(char *)a1;

@end
