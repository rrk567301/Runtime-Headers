@class NSArray, NSDictionary;

@interface OSLogDeserializedEventDecomposedMessage : OSLogEventDecomposedMessage

@property (readonly, nonatomic) NSArray *segments;
@property (readonly, nonatomic) NSDictionary *backingDict;

- (unsigned long long)state;
- (id)literalPrefixAtIndex:(unsigned long long)a0;
- (id)argumentAtIndex:(unsigned long long)a0;
- (id)initWithDict:(id)a0 metadata:(id)a1;
- (id)placeholderAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (unsigned long long)placeholderCount;

@end
