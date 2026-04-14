@class NSDictionary, NSMutableDictionary;

@interface SKDBaseUpdate : SKDBaseItem {
    NSMutableDictionary *_attributes;
}

@property (readonly, nonatomic) NSDictionary *attributes;

- (void).cxx_destruct;
- (void)addAttribute:(id)a0 value:(id)a1;
- (void)addAttributesFromDictionary:(id)a0;
- (id)initWithIdentifier:(id)a0 status:(unsigned char)a1 info:(id)a2 feedback:(id)a3;

@end
