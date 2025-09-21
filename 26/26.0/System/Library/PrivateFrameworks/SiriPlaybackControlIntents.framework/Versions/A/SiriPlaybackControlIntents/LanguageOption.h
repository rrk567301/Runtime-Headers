@class NSString, NSNumber, NSArray;

@interface LanguageOption : INObject

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, copy) NSString *languageIdentifier;
@property (nonatomic, copy) NSString *languageTag;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) NSNumber *isActive;
@property (nonatomic, copy) NSArray *characteristics;
@property (nonatomic, retain) NSNumber *disambiguated;

- (id)initWithIdentifier:(id)a0 displayString:(id)a1 pronunciationHint:(id)a2;
- (id)initWithCoder:(id)a0;

@end
