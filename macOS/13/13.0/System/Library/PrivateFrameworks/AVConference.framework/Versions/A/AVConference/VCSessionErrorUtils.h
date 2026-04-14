@interface VCSessionErrorUtils : NSObject

+ (id)VCSessionErrorEvent:(unsigned int)a0 errorPath:(id)a1 returnCode:(long long)a2;
+ (id)VCSessionParticipantErrorEvent:(unsigned int)a0 errorPath:(id)a1;
+ (id)VCSessionCaptionsErrorEvent:(unsigned int)a0 errorPath:(id)a1 returnCode:(long long)a2;

@end
