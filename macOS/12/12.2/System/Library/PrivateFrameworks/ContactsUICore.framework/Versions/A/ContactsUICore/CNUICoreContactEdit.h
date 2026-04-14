@class CNContact;

@interface CNUICoreContactEdit : NSObject

@property (readonly, nonatomic) CNContact *original;
@property (readonly, nonatomic) CNContact *modified;
@property (readonly, nonatomic) BOOL originalAndModifiedDiffer;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithContact:(id)a0;
- (id)initWithOriginalContact:(id)a0 modifiedContact:(id)a1;
- (id)editBySettingModifiedContact:(id)a0;
- (BOOL)modifiesContact:(id)a0;

@end
