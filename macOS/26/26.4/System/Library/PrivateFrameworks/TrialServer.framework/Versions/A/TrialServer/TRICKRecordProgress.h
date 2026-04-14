@interface TRICKRecordProgress : NSObject <NSCopying>

@property (readonly, nonatomic) unsigned long long size;
@property (readonly, nonatomic) unsigned long long transferred;

+ (id)progressWithSize:(unsigned long long)a0 transferred:(unsigned long long)a1;

- (id)initWithSize:(unsigned long long)a0 transferred:(unsigned long long)a1;
- (id)copyWithReplacementTransferred:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqualToProgress:(id)a0;
- (id)description;
- (id)copyWithReplacementSize:(unsigned long long)a0;

@end
