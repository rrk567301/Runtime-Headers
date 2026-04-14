@class CNContact;

@interface _CNUIUserActionContactItem : CNUIUserActionItem

@property (readonly, copy, nonatomic) CNContact *contact;

- (id)initWithContact:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;

@end
