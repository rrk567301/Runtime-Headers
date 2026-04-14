@class NSDictionary, _OSLogEventSerializationMetadata;

@interface OSLogDeserializedMessagePlaceholder : OSLogMessagePlaceholder

@property (readonly, nonatomic) NSDictionary *backingDict;
@property (readonly, nonatomic) _OSLogEventSerializationMetadata *metadata;

- (id)typeNamespace;
- (id)initWithDict:(id)a0 metadata:(id)a1;
- (id)tokens;
- (id)type;
- (int)width;
- (int)precision;
- (id)rawString;
- (void).cxx_destruct;

@end
