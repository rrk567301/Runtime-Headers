@class NSString;

@interface TPSContextualDuetEventSource : TPSSerializableObject

@property (copy, nonatomic) NSString *sourceID;
@property (copy, nonatomic) NSString *bundleID;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
