@class NSMutableData;

@interface SHA256Hash : NSObject <NSCopying>

@property (readonly, nonatomic) NSMutableData *data;

- (char *)mutableBytes;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithSHA256Hash:(id)a0;

@end
