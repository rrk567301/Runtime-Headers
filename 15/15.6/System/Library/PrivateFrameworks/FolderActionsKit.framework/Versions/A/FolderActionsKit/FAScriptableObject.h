@class NSUUID, NSString;

@interface FAScriptableObject : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property unsigned long long index;
@property (retain) NSUUID *id;
@property (retain) NSString *name;
@property char objectSpecifierUsesNameBeforeID;
@property (weak) id container;
@property (retain) NSString *keyInContainer;

+ (id)keyInContainer;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)objectSpecifier;
- (void)resetContainmentProperties;

@end
