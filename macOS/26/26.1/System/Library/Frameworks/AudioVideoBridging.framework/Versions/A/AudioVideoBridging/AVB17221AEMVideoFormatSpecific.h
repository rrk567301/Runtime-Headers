@interface AVB17221AEMVideoFormatSpecific : AVB17221AEMObject <NSCopying>

@property unsigned int formatSpecific;
@property unsigned char contentProtection;
@property unsigned char profile;
@property unsigned char level;
@property unsigned short formatSubtype;
@property unsigned short rtpPayloadSubtype;

+ (id)keyPathsForValuesAffectingLevel;
+ (id)keyPathsForValuesAffectingContentProtection;
+ (id)keyPathsForValuesAffectingFormatSubtype;
+ (id)keyPathsForValuesAffectingProfile;
+ (id)keyPathsForValuesAffectingRtpPayloadSubtype;

- (void)setProfile:(unsigned char)a0;
- (unsigned long long)hash;
- (unsigned char)contentProtection;
- (unsigned char)profile;
- (unsigned char)level;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void)setLevel:(unsigned char)a0;
- (void)setContentProtection:(unsigned char)a0;
- (id)debugLogStringWithIndentation:(id)a0;
- (unsigned short)formatSubtype;
- (id)plistRepresentationForDiagnostics:(BOOL)a0;
- (unsigned short)rtpPayloadSubtype;
- (void)setFormatSubtype:(unsigned short)a0;
- (void)setRtpPayloadSubtype:(unsigned short)a0;
- (BOOL)updateWithPlistEntry:(id)a0;
- (BOOL)updateWithXML:(id)a0;
- (id)xmlRepresentation;

@end
