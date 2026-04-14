@class GTTransportMessage_replayer;

@interface GTMTLReplayActivityMessage : GTMTLReplayActivity {
    GTTransportMessage_replayer *_message;
}

- (id)summary;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithMessage:(id)a0;
- (id)jsonObject;
- (void).cxx_destruct;
- (unsigned int)messageSerial;
- (void)outputToLog:(id)a0;

@end
