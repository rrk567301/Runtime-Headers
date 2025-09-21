@class NSString;

@interface GTFileEntry : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSString *path;
@property (readonly, nonatomic) NSString *destination;
@property (readonly, nonatomic) unsigned long long fileSize;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithLink:(id)a0 destination:(id)a1;
- (id)initWithPath:(id)a0 fileSize:(unsigned long long)a1;

@end
