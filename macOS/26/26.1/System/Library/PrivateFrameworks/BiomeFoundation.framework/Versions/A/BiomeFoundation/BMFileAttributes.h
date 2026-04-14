@class NSString;

@interface BMFileAttributes : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long mode;
@property (readonly, nonatomic) unsigned long long protectionClass;
@property (readonly, nonatomic) NSString *path;
@property (readonly, nonatomic) NSString *filename;

- (unsigned long long)hash;
- (id)initWithPath:(id)a0 mode:(unsigned long long)a1 protectionClass:(unsigned long long)a2;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;

@end
