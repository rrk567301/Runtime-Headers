@class NSArray, NSDictionary;

@interface OSLogDeserializedEventDecomposedMessage : OSLogEventDecomposedMessage

@property (readonly, nonatomic) NSArray *segments;
@property (readonly, nonatomic) NSDictionary *backingDict;

- (id)argumentAtIndex:(unsigned long long)a0;
- (id)initWithDict:(id)a0 metadata:(id)a1;
- (void).cxx_destruct;
- (id)literalPrefixAtIndex:(unsigned long long)a0;
- (id)placeholderAtIndex:(unsigned long long)a0;
- (unsigned long long)placeholderCount;
- (unsigned long long)state;

@end
