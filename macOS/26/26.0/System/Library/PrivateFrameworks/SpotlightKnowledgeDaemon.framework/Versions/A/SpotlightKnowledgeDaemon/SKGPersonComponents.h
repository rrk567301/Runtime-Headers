@class NSArray, NSString, NSMutableSet;

@interface SKGPersonComponents : NSObject {
    NSMutableSet *_nameComponents;
    NSMutableSet *_names;
    NSMutableSet *_displayNames;
    NSMutableSet *_emailAddresses;
    NSMutableSet *_phoneNumbers;
}

@property (readonly) NSArray *nameComponents;
@property (readonly) NSArray *names;
@property (readonly) NSArray *displayNames;
@property (readonly) NSString *entityIdentifier;
@property (readonly) NSString *contactIdentifier;
@property (readonly) NSString *photosPersonIdentifier;
@property (readonly) NSArray *phoneNumbers;
@property (readonly) NSArray *emailAddresses;

- (void)setEntityIdentifier:(id)a0;
- (void)setContactIdentifier:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)setPhotosPersonIdentifier:(id)a0;
- (void)addName:(id)a0 nameComponents:(id)a1 displayName:(id)a2;
- (id)initWithEmailAddresses:(id)a0 phoneNumbers:(id)a1;
- (id)initWithName:(id)a0 nameComponents:(id)a1 displayName:(id)a2 emailAddresses:(id)a3 phoneNumbers:(id)a4;
- (BOOL)isEqualToPersonComponents:(id)a0;

@end
