@class BloodhoundPacketDumper;

@interface AppleTypeCPacketDumper : NSObject {
    BloodhoundPacketDumper *_dumper;
}

- (void).cxx_destruct;
- (id)initWithFileName:(id)a0;
- (void)dumpCommand:(id)a0;
- (void)dumpResponse:(id)a0;

@end
