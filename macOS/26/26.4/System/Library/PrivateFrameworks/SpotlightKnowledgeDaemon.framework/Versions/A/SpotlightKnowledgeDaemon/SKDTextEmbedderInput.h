@class NSString, NSDictionary, NSArray;

@interface SKDTextEmbedderInput : SKDModelInput {
    NSString *_text;
    NSArray *_ranges;
}

@property (copy, nonatomic) NSString *language;
@property (retain, nonatomic) NSDictionary *replacements;
@property (nonatomic) unsigned long long maxChunkCount;

- (void).cxx_destruct;
- (id)initWithInputID:(int)a0 text:(id)a1 ranges:(id)a2;

@end
