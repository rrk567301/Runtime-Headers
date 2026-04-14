@class NSDictionary, _OSLogEventSerializationMetadata;

@interface OSLogDeserializedMessagePlaceholder : OSLogMessagePlaceholder

@property (readonly, nonatomic) NSDictionary *backingDict;
@property (readonly, nonatomic) _OSLogEventSerializationMetadata *metadata;

- (id)initWithDict:(id)a0 metadata:(id)a1;
- (id)typeNamespace;
- (int)precision;
- (id)type;
- (id)tokens;
- (id)rawString;
- (void).cxx_destruct;
- (int)width;

@end
