@class NSString;

@interface INRestaurantGuestDisplayPreferences : NSObject <INRestaurantGuestDisplayPreferencesExport, NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property char nameFieldFirstNameOptional;
@property char nameFieldLastNameOptional;
@property char nameFieldShouldBeDisplayed;
@property char emailAddressFieldShouldBeDisplayed;
@property char phoneNumberFieldShouldBeDisplayed;
@property char nameEditable;
@property char emailAddressEditable;
@property char phoneNumberEditable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_dictionaryRepresentation;
- (id)descriptionAtIndent:(unsigned long long)a0;

@end
