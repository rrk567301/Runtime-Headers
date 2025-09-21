@class NSSet, NSDictionary;

@interface CHSWidgetDescriptorsBox : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSSet *descriptors;
@property (readonly, copy, nonatomic) NSDictionary *descriptorsByExtensionIdentifier;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDescriptors:(id)a0;
- (void)_performValidation;

@end
