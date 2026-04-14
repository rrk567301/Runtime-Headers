@class NSDictionary, _OSLogEventSerializationMetadata;

@interface OSLogDeserializedMessagePlaceholder : OSLogMessagePlaceholder

@property (readonly, nonatomic) NSDictionary *backingDict;
@property (readonly, nonatomic) _OSLogEventSerializationMetadata *metadata;

- (void).cxx_destruct;
- (id)type;
- (int)width;
- (int)precision;
- (id)tokens;
- (id)rawString;
- (id)typeNamespace;
- (id)initWithDict:(id)a0 metadata:(id)a1;

@end
