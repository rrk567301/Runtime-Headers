@class NSArray;

@interface GCDevicePhysicalInputGroupDescription : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSArray *physicalInputs;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)validate:(out id *)a0;

@end
