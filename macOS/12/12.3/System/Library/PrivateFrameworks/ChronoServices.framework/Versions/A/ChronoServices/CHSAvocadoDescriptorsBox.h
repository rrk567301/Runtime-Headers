@class NSSet, NSDictionary;

@interface CHSAvocadoDescriptorsBox : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSSet *descriptors;
@property (readonly, copy, nonatomic) NSDictionary *descriptorsByExtensionIdentifier;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithDescriptors:(id)a0;
- (void)_performValidation;

@end
