@class NSDictionary, _OSLogEventSerializationMetadata;

@interface OSLogDeserializedMessagePlaceholder : OSLogMessagePlaceholder

@property (readonly, nonatomic) NSDictionary *backingDict;
@property (readonly, nonatomic) _OSLogEventSerializationMetadata *metadata;

- (id)typeNamespace;
- (int)width;
- (id)rawString;
- (id)type;
- (int)precision;
- (void).cxx_destruct;
- (id)initWithDict:(id)a0 metadata:(id)a1;
- (id)tokens;

@end
