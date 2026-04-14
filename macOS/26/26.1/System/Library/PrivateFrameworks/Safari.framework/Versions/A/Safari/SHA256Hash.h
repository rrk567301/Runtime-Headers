@class NSMutableData;

@interface SHA256Hash : NSObject <NSCopying>

@property (readonly, nonatomic) NSMutableData *data;

- (unsigned long long)hash;
- (char *)mutableBytes;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithSHA256Hash:(id)a0;

@end
