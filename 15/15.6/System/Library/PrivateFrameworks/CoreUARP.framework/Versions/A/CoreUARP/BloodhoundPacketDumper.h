@class NSString;

@interface BloodhoundPacketDumper : NSObject {
    struct pcap { } *_pcap;
    struct pcap_dumper { } *_dumper;
    char _externalDumper;
    NSString *_fileName;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithFileName:(id)a0;
- (id)initWithDumper:(struct pcap_dumper { } *)a0;
- (void)dumpPacket:(id)a0 type:(unsigned int)a1 metadata:(void *)a2 metadataLength:(unsigned long long)a3;

@end
