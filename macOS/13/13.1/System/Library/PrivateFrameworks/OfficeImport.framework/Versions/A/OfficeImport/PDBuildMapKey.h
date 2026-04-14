@class NSValue, NSString;

@interface PDBuildMapKey : NSObject <NSCopying> {
    NSValue *mDrawableValue;
    NSString *mGroupId;
}

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)groupId;
- (void)setGroupId:(id)a0;
- (id)drawable;
- (void)setDrawable:(id)a0;
- (id)initWithDrawable:(id)a0 groupId:(id)a1;

@end
