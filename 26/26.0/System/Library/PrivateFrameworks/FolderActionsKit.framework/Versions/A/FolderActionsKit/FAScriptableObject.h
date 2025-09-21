@class NSUUID, NSString;

@interface FAScriptableObject : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property unsigned long long index;
@property (retain) NSUUID *id;
@property (retain) NSString *name;
@property BOOL objectSpecifierUsesNameBeforeID;
@property (weak) id container;
@property (retain) NSString *keyInContainer;

+ (id)keyInContainer;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)objectSpecifier;
- (void)resetContainmentProperties;

@end
