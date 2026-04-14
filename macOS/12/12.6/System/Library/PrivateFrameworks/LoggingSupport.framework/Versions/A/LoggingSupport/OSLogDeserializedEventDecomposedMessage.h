@class NSArray, NSDictionary;

@interface OSLogDeserializedEventDecomposedMessage : OSLogEventDecomposedMessage

@property (readonly, nonatomic) NSArray *segments;
@property (readonly, nonatomic) NSDictionary *backingDict;

- (void).cxx_destruct;
- (unsigned long long)state;
- (unsigned long long)placeholderCount;
- (id)literalPrefixAtIndex:(unsigned long long)a0;
- (id)placeholderAtIndex:(unsigned long long)a0;
- (id)argumentAtIndex:(unsigned long long)a0;
- (id)initWithDict:(id)a0 metadata:(id)a1;

@end
