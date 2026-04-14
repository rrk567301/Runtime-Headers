@class CKVSpanInfo, NSArray;

@interface CKVSpanMatch : NSObject <NSCopying>

@property (readonly, nonatomic) CKVSpanInfo *spanInfo;
@property (readonly, nonatomic) NSArray *fields;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithSpanInfo:(id)a0 fields:(id)a1;
- (BOOL)isEqualToSpanMatch:(id)a0;

@end
