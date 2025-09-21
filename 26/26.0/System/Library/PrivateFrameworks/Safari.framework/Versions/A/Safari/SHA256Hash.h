@class NSMutableData;

@interface SHA256Hash : NSObject <NSCopying>

@property (readonly, nonatomic) NSMutableData *data;

- (char *)mutableBytes;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithSHA256Hash:(id)a0;

@end
