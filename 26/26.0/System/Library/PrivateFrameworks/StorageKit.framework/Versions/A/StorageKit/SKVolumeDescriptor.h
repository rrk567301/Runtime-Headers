@class NSString, SKFilesystem;

@interface SKVolumeDescriptor : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) SKFilesystem *filesystem;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *password;

+ (id)descriptorWithName:(id)a0 filesystem:(id)a1;
+ (id)descriptorWithName:(id)a0 password:(id)a1 filesystem:(id)a2;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)redactedDescription;
- (id)initWithName:(id)a0 password:(id)a1 filesystem:(id)a2;
- (BOOL)validateForErase;

@end
