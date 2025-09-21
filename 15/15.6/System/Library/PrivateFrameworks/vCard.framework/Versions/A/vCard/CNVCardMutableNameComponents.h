@class NSString;

@interface CNVCardMutableNameComponents : CNVCardNameComponents

@property (copy) NSString *formattedName;
@property (copy) NSString *firstName;
@property (copy) NSString *lastName;
@property (copy) NSString *middleName;
@property (copy) NSString *title;
@property (copy) NSString *suffix;
@property (copy) NSString *companyName;
@property char isCompany;

- (void)setTitle:(id)a0;
- (void)setMiddleName:(id)a0;
- (void)setFirstName:(id)a0;
- (void)setLastName:(id)a0;
- (void)setIsCompany:(char)a0;
- (void)setSuffix:(id)a0;
- (void)setCompanyName:(id)a0;
- (void)setFormattedName:(id)a0;

@end
