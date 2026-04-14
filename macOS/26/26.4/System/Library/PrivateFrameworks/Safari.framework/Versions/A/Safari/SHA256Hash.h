@class NSMutableData;

@interface SHA256Hash : NSObject <NSCopying>

@property (readonly, nonatomic) NSMutableData *data;

- (char *)mutableBytes;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)initWithSHA256Hash:(id)a0;

@end
