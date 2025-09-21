@interface CNUISaveNonCuratedValueCommandFactory : NSObject

+ (id)commandWithContactStore:(id)a0 contact:(id)a1 isContactMeContact:(char)a2 isContactReadOnly:(char)a3 isContactCurated:(char)a4 nonCuratedValueToSave:(id)a5 forKey:(id)a6 containerIdentifier:(id)a7 ignoresGuardianRestrictions:(char)a8;

@end
