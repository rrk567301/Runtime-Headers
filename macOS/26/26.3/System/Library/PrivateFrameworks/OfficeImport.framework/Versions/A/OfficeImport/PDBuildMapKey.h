@class NSValue, NSString;

@interface PDBuildMapKey : NSObject <NSCopying> {
    NSValue *mDrawableValue;
    NSString *mGroupId;
}

- (id)description;
- (id)init;
- (void)setGroupId:(id)a0;
- (id)groupId;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)drawable;
- (id)initWithDrawable:(id)a0 groupId:(id)a1;
- (void)setDrawable:(id)a0;

@end
