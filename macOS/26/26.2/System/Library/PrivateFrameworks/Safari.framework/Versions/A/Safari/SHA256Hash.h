@class NSMutableData;

@interface SHA256Hash : NSObject <NSCopying>

@property (readonly, nonatomic) NSMutableData *data;

- (char *)mutableBytes;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithSHA256Hash:(id)a0;

@end
