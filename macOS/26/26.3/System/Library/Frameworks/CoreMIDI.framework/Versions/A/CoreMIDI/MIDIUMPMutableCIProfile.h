@interface MIDIUMPMutableCIProfile : MIDIUMPCIProfile

+ (id)description;

- (void)dealloc;
- (id)initWithProfileID:(union { struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; } x0; struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; } x1; })a0 name:(id)a1 profileType:(unsigned char)a2 groupOffset:(unsigned char)a3 firstChannel:(unsigned char)a4 enabledChannelCount:(unsigned short)a5 totalChannelCount:(unsigned short)a6;
- (BOOL)setProfileState:(BOOL)a0 enabledChannelCount:(unsigned short)a1 error:(id *)a2;

@end
