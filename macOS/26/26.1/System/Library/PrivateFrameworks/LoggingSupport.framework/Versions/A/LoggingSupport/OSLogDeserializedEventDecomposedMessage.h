@class NSArray, NSDictionary;

@interface OSLogDeserializedEventDecomposedMessage : OSLogEventDecomposedMessage

@property (readonly, nonatomic) NSArray *segments;
@property (readonly, nonatomic) NSDictionary *backingDict;

- (id)initWithDict:(id)a0 metadata:(id)a1;
- (id)argumentAtIndex:(unsigned long long)a0;
- (id)literalPrefixAtIndex:(unsigned long long)a0;
- (unsigned long long)placeholderCount;
- (void).cxx_destruct;
- (unsigned long long)state;
- (id)placeholderAtIndex:(unsigned long long)a0;

@end
