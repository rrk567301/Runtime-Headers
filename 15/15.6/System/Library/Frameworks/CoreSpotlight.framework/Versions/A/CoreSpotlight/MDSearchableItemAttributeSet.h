@class NSArray;

@interface MDSearchableItemAttributeSet : CSSearchableItemAttributeSet

@property (copy) NSArray *authorPersons;
@property (copy) NSArray *primaryRecipientPersons;
@property (copy) NSArray *recipients;

+ (char)supportsSecureCoding;

@end
