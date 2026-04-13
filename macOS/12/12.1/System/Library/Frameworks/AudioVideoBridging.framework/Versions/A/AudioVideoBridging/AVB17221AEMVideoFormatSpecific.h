@interface AVB17221AEMVideoFormatSpecific : AVB17221AEMObject <NSCopying>

@property unsigned int formatSpecific;
@property unsigned char contentProtection;
@property unsigned char profile;
@property unsigned char level;
@property unsigned short formatSubtype;
@property unsigned short rtpPayloadSubtype;

+ (id)keyPathsForValuesAffectingFormatSubtype;
+ (id)keyPathsForValuesAffectingContentProtection;
+ (id)keyPathsForValuesAffectingProfile;
+ (id)keyPathsForValuesAffectingLevel;
+ (id)keyPathsForValuesAffectingRtpPayloadSubtype;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (unsigned char)level;
- (void)setLevel:(unsigned char)a0;
- (void)setProfile:(unsigned char)a0;
- (unsigned char)profile;
- (id)plistRepresentation;
- (unsigned char)contentProtection;
- (void)setContentProtection:(unsigned char)a0;
- (BOOL)updateWithPlistEntry:(id)a0;
- (BOOL)updateWithXML:(id)a0;
- (id)xmlRepresentation;
- (id)debugLogStringWithIndentation:(id)a0;
- (void)setFormatSubtype:(unsigned short)a0;
- (unsigned short)formatSubtype;
- (void)setRtpPayloadSubtype:(unsigned short)a0;
- (unsigned short)rtpPayloadSubtype;

@end
