@class CNContact, NSAttributedString, PHPerson;

@interface PXPeopleNamingItem : NSObject {
    void /* unknown type, empty encoding */ highlightLocation;
    void /* unknown type, empty encoding */ backingObject;
}

@property (nonatomic, readonly) PHPerson *person;
@property (nonatomic, readonly) CNContact *contact;
@property (nonatomic, readonly) NSAttributedString *title;
@property (nonatomic, readonly) NSAttributedString *subtitle;

- (void).cxx_destruct;
- (id)init;
- (id)initWithContact:(id)a0 searchString:(id)a1;
- (id)initWithPerson:(id)a0 searchString:(id)a1;

@end
