@class MIDIUMPMutableEndpoint;

@interface MIDIUMPMutableFunctionBlock : MIDIUMPFunctionBlock

@property (readonly, weak, nonatomic) MIDIUMPMutableEndpoint *UMPEndpoint;

+ (id)description;

- (char)setEnabled:(char)a0 error:(id *)a1;
- (char)registerWithServer;
- (id)initWithName:(id)a0 direction:(int)a1 firstGroup:(unsigned char)a2 totalGroupsSpanned:(unsigned char)a3 maxSysEx8Streams:(unsigned char)a4 MIDI1Info:(int)a5 UIHint:(int)a6 isEnabled:(char)a7;
- (char)reconfigureWithFirstGroup:(unsigned char)a0 direction:(int)a1 MIDI1Info:(int)a2 UIHint:(int)a3 error:(id *)a4;
- (void)setFunctionBlockID:(unsigned char)a0;
- (char)setName:(id)a0 error:(id *)a1;

@end
