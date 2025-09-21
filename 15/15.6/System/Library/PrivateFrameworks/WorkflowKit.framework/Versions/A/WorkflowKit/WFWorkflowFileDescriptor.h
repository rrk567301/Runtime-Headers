@class NSString, WFFileRepresentation;

@interface WFWorkflowFileDescriptor : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) WFFileRepresentation *file;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *sourceAppIdentifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFile:(id)a0 name:(id)a1;
- (id)initWithFile:(id)a0 name:(id)a1 sourceAppIdentifier:(id)a2;

@end
