@class NSString, SKFilesystem;

@interface SKVolumeDescriptor : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) SKFilesystem *filesystem;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *password;

+ (id)descriptorWithName:(id)a0 filesystem:(id)a1;
+ (id)descriptorWithName:(id)a0 password:(id)a1 filesystem:(id)a2;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)redactedDescription;
- (id)initWithName:(id)a0 password:(id)a1 filesystem:(id)a2;
- (char)validateForErase;

@end
