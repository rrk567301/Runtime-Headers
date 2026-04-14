@class NSString, NSArray, NSDate, CSSearchableItem;

@interface CSItemSummary : NSObject <NSCopying, NSSecureCoding> {
    NSString *_type;
    NSString *_name;
    NSString *_contactIdentifier;
    NSArray *_alternateNames;
    NSArray *_phoneNumbers;
    NSArray *_emailAddresses;
    NSArray *_allEmailAddresses;
    long long _contactScope;
    NSDate *_dateFrom;
    NSDate *_dateTo;
    NSString *_textQuery;
    long long _textScope;
    long long _statusValue;
    NSString *_attachmentQuery;
    long long _attachmentScope;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) CSSearchableItem *sourceItem;

- (id)name;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)alternateNames;
- (id)contactIdentifier;
- (id)phoneNumbers;
- (id)emailAddresses;
- (id)initWithItemSummaryType:(id)a0;
- (id)initWithItemSummary:(id)a0 newContactScope:(long long)a1;
- (id)initWithName:(id)a0 contactIdentifier:(id)a1 alternateNames:(id)a2 phoneNumbers:(id)a3 emailAddresses:(id)a4 contactScope:(long long)a5;
- (id)initWithName:(id)a0 contactIdentifier:(id)a1 alternateNames:(id)a2 phoneNumbers:(id)a3 emailAddresses:(id)a4 allEmailAddresses:(id)a5 contactScope:(long long)a6;
- (id)initWithDateFrom:(id)a0 dateTo:(id)a1;
- (id)initWithTextQuery:(id)a0 textScope:(long long)a1;
- (id)initWithStatus:(long long)a0;
- (id)initWithAttachmentQuery:(id)a0 attachmentScope:(long long)a1;
- (id)allEmailAddresses;
- (long long)contactScope;
- (id)dateFrom;
- (id)dateTo;
- (id)textQuery;
- (long long)textScope;
- (long long)statusValue;
- (id)attachmentQuery;
- (long long)attachmentScope;

@end
