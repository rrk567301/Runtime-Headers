@class CNContact;

@interface _CNUIUserActionContactItem : CNUIUserActionItem

@property (readonly, copy, nonatomic) CNContact *contact;

- (id)initWithContact:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
