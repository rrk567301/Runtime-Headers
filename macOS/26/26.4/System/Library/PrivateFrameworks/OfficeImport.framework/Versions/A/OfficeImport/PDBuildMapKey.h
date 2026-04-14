@class NSValue, NSString;

@interface PDBuildMapKey : NSObject <NSCopying> {
    NSValue *mDrawableValue;
    NSString *mGroupId;
}

- (void)setGroupId:(id)a0;
- (id)groupId;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (id)drawable;
- (id)initWithDrawable:(id)a0 groupId:(id)a1;
- (void)setDrawable:(id)a0;

@end
