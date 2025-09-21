@interface CDMServiceGraphProtoBackedCommand : CDMServiceGraphCommand

+ (char)supportsSecureCoding;
+ (id)innerProtoPropertyName;
+ (Class)innerProtoType;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)loggingRequestID;

@end
