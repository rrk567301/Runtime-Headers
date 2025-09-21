@class AVBMACAddress;

@interface AVBOutputStream : AVBStream

@property (copy, nonatomic) AVBMACAddress *destinationMAC;
@property (readonly, copy, nonatomic) AVBMACAddress *sourceMAC;
@property (nonatomic) unsigned short vlanID;
@property (nonatomic) unsigned char priorityCodePoint;

+ (id)IOClassName;
+ (id)diagnosticDescriptionForService:(id)a0 withIndent:(id)a1;

- (void).cxx_destruct;
- (char)getLaunchTimeOffset:(unsigned long long *)a0 error:(id *)a1;
- (char)getPrefetchDelay:(unsigned long long *)a0 error:(id *)a1;
- (id)initWithStreamID:(unsigned long long)a0 destinationMACAddess:(id)a1 vlanID:(unsigned short)a2 priorityCodePoint:(unsigned char)a3 onInterfaceNamed:(id)a4;
- (char)outputFrames:(char)a0 error:(id *)a1;
- (char)updatePacketsFromInfoStartingAt:(unsigned int)a0 endingAt:(unsigned int)a1 error:(id *)a2;

@end
