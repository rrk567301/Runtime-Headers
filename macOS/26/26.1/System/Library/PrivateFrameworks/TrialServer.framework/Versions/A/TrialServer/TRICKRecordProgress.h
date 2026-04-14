@interface TRICKRecordProgress : NSObject <NSCopying>

@property (readonly, nonatomic) unsigned long long size;
@property (readonly, nonatomic) unsigned long long transferred;

+ (id)progressWithSize:(unsigned long long)a0 transferred:(unsigned long long)a1;

- (unsigned long long)hash;
- (id)copyWithReplacementSize:(unsigned long long)a0;
- (id)initWithSize:(unsigned long long)a0 transferred:(unsigned long long)a1;
- (BOOL)isEqualToProgress:(id)a0;
- (id)copyWithReplacementTransferred:(unsigned long long)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;

@end
