@class NSString;

@interface BMFileAttributes : NSObject <NSCopying>

@property (retain, nonatomic) NSString *path;
@property (nonatomic) unsigned long long permission;
@property (nonatomic) unsigned long long protectionClass;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithFilePath:(id)a0 permission:(unsigned long long)a1 protectionClass:(unsigned long long)a2;

@end
