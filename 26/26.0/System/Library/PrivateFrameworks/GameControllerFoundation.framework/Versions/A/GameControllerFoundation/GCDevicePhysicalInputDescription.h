@class NSArray, NSSet;

@interface GCDevicePhysicalInputDescription : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *elements;
@property (copy, nonatomic) NSSet *attributes;

- (void)encodeWithCoder:(id)a0;
- (BOOL)validate:(out id *)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)redactedDescription;

@end
