@class NSString;

@interface ACFPrincipal : NSObject <NSCopying, NSCoding> {
    NSString *_principalString;
}

@property (retain, nonatomic) NSString *userName;
@property (retain, nonatomic) NSString *realm;
@property (retain, nonatomic) NSString *principalString;

+ (id)principalWithPrincipalString:(id)a0;
+ (id)principalWithUserName:(id)a0 realm:(id)a1;

- (unsigned long long)hash;
- (BOOL)isEqualTo:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void)releaseCaches;

@end
