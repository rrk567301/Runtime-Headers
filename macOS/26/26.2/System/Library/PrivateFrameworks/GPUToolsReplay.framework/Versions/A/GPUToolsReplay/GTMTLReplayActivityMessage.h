@class GTTransportMessage_replayer;

@interface GTMTLReplayActivityMessage : GTMTLReplayActivity {
    GTTransportMessage_replayer *_message;
}

- (id)jsonObject;
- (id)initWithMessage:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)summary;
- (unsigned int)messageSerial;
- (void)outputToLog:(id)a0;

@end
