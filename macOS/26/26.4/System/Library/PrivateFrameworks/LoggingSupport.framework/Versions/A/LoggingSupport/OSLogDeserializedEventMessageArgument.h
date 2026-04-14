@class NSDictionary, _OSLogEventSerializationMetadata;

@interface OSLogDeserializedEventMessageArgument : OSLogEventMessageArgument

@property (readonly, nonatomic) NSDictionary *backingDict;
@property (readonly, nonatomic) _OSLogEventSerializationMetadata *metadata;

- (unsigned long long)category;
- (long long)int64Value;
- (const void *)rawBytes;
- (id)initWithDict:(id)a0 metadata:(id)a1;
- (double)doubleValue;
- (long double)longDoubleValue;
- (id)objectRepresentation;
- (unsigned long long)unsignedInt64Value;
- (unsigned long long)privacy;
- (unsigned short)rawBytesLength;
- (id)_numValue;
- (void).cxx_destruct;
- (unsigned long long)scalarType;
- (unsigned long long)scalarCategory;
- (unsigned long long)availability;

@end
