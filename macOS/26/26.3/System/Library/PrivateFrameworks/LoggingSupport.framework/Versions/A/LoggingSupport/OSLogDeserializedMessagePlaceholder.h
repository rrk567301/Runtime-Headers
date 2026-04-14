@class NSDictionary, _OSLogEventSerializationMetadata;

@interface OSLogDeserializedMessagePlaceholder : OSLogMessagePlaceholder

@property (readonly, nonatomic) NSDictionary *backingDict;
@property (readonly, nonatomic) _OSLogEventSerializationMetadata *metadata;

- (int)precision;
- (id)typeNamespace;
- (id)type;
- (int)width;
- (id)tokens;
- (id)initWithDict:(id)a0 metadata:(id)a1;
- (void).cxx_destruct;
- (id)rawString;

@end
