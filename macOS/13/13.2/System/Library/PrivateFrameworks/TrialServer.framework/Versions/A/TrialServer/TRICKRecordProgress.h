@interface TRICKRecordProgress : NSObject <NSCopying>

@property (readonly, nonatomic) unsigned long long size;
@property (readonly, nonatomic) unsigned long long transferred;

+ (id)progressWithSize:(unsigned long long)a0 transferred:(unsigned long long)a1;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSize:(unsigned long long)a0 transferred:(unsigned long long)a1;
- (id)copyWithReplacementSize:(unsigned long long)a0;
- (id)copyWithReplacementTransferred:(unsigned long long)a0;
- (BOOL)isEqualToProgress:(id)a0;

@end
