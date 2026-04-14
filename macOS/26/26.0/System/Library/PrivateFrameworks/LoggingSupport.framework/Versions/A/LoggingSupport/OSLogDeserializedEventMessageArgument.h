@class NSDictionary, _OSLogEventSerializationMetadata;

@interface OSLogDeserializedEventMessageArgument : OSLogEventMessageArgument

@property (readonly, nonatomic) NSDictionary *backingDict;
@property (readonly, nonatomic) _OSLogEventSerializationMetadata *metadata;

- (const void *)rawBytes;
- (long long)int64Value;
- (unsigned long long)availability;
- (unsigned long long)category;
- (id)initWithDict:(id)a0 metadata:(id)a1;
- (unsigned long long)privacy;
- (long double)longDoubleValue;
- (unsigned short)rawBytesLength;
- (double)doubleValue;
- (unsigned long long)scalarCategory;
- (unsigned long long)unsignedInt64Value;
- (unsigned long long)scalarType;
- (id)_numValue;
- (void).cxx_destruct;
- (id)objectRepresentation;

@end
