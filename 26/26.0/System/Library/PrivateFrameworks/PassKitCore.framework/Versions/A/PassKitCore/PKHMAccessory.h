@class NSUUID, NSString;

@interface PKHMAccessory : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSUUID *uniqueIdentifier;
@property (retain, nonatomic) NSString *name;

- (void)encodeWithCoder:(id)a0;
- (id)initWithUniqueIdentifier:(id)a0 name:(id)a1;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
