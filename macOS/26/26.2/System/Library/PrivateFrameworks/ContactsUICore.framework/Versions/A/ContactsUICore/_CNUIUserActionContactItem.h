@class CNContact;

@interface _CNUIUserActionContactItem : CNUIUserActionItem

@property (readonly, copy, nonatomic) CNContact *contact;

- (id)initWithContact:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
