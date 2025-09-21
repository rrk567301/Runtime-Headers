@class NSArray, NSSet;

@interface GCDevicePhysicalInputDescription : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSArray *elements;
@property (copy, nonatomic) NSSet *attributes;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)redactedDescription;
- (char)validate:(out id *)a0;

@end
