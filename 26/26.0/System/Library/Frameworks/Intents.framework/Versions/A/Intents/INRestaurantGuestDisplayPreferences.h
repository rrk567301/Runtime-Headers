@class NSString;

@interface INRestaurantGuestDisplayPreferences : NSObject <INRestaurantGuestDisplayPreferencesExport, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property BOOL nameFieldFirstNameOptional;
@property BOOL nameFieldLastNameOptional;
@property BOOL nameFieldShouldBeDisplayed;
@property BOOL emailAddressFieldShouldBeDisplayed;
@property BOOL phoneNumberFieldShouldBeDisplayed;
@property BOOL nameEditable;
@property BOOL emailAddressEditable;
@property BOOL phoneNumberEditable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)descriptionAtIndent:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)_dictionaryRepresentation;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;

@end
