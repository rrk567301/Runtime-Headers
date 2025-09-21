@class CNContact;

@interface CNUICoreContactEdit : NSObject

@property (readonly, nonatomic) CNContact *original;
@property (readonly, nonatomic) CNContact *modified;
@property (readonly, nonatomic) char originalAndModifiedDiffer;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithContact:(id)a0;
- (id)editBySettingModifiedContact:(id)a0;
- (id)initWithOriginalContact:(id)a0 modifiedContact:(id)a1;
- (char)modifiesContact:(id)a0;

@end
