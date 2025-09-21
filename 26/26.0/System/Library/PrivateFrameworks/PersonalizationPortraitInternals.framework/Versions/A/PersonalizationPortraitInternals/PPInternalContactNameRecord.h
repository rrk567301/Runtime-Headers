@class NSString, PPPBContactNameRecord;

@interface PPInternalContactNameRecord : PPContactNameRecord {
    PPPBContactNameRecord *_pbRecord;
    NSString *_localizedFullName;
}

- (id)organizationName;
- (id)middleName;
- (id)relatedNames;
- (id)firstName;
- (id)lastName;
- (id)identifier;
- (void)setScore:(double)a0;
- (id)nickname;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jobTitle;
- (id)phoneticLastName;
- (unsigned char)changeType;
- (double)score;
- (id)sourceIdentifier;
- (id)localizedFullName;
- (id)phoneticFirstName;
- (id)phoneticMiddleName;
- (void).cxx_destruct;
- (unsigned char)source;
- (id)cityNames;
- (id)initWithIdentifier:(id)a0 score:(double)a1 source:(unsigned char)a2 sourceIdentifier:(id)a3 changeType:(unsigned char)a4 firstName:(id)a5 phoneticFirstName:(id)a6 middleName:(id)a7 phoneticMiddleName:(id)a8 lastName:(id)a9 phoneticLastName:(id)a10 organizationName:(id)a11 jobTitle:(id)a12 nickname:(id)a13 relatedNames:(id)a14 streetNames:(id)a15 cityNames:(id)a16;
- (id)streetNames;
- (id)clientCopy;
- (id)initWithPBContactNameRecord:(id)a0;
- (id)pbRecord;

@end
