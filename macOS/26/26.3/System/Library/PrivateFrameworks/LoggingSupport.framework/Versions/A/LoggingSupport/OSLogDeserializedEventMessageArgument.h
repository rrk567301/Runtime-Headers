@class NSDictionary, _OSLogEventSerializationMetadata;

@interface OSLogDeserializedEventMessageArgument : OSLogEventMessageArgument

@property (readonly, nonatomic) NSDictionary *backingDict;
@property (readonly, nonatomic) _OSLogEventSerializationMetadata *metadata;

- (unsigned long long)scalarType;
- (id)objectRepresentation;
- (double)doubleValue;
- (unsigned long long)category;
- (id)initWithDict:(id)a0 metadata:(id)a1;
- (id)_numValue;
- (long long)int64Value;
- (unsigned short)rawBytesLength;
- (unsigned long long)availability;
- (void).cxx_destruct;
- (unsigned long long)unsignedInt64Value;
- (long double)longDoubleValue;
- (unsigned long long)scalarCategory;
- (const void *)rawBytes;
- (unsigned long long)privacy;

@end
