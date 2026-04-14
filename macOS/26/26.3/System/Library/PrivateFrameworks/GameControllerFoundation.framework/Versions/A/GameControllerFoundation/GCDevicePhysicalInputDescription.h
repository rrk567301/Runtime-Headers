@class NSArray, NSSet;

@interface GCDevicePhysicalInputDescription : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *elements;
@property (copy, nonatomic) NSSet *attributes;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)redactedDescription;
- (BOOL)validate:(out id *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;

@end
