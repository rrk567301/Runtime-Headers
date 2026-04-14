@class GTTransportMessage_replayer;

@interface GTMTLReplayActivityMessage : GTMTLReplayActivity {
    GTTransportMessage_replayer *_message;
}

- (id)jsonObject;
- (id)summary;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithMessage:(id)a0;
- (unsigned int)messageSerial;
- (void)outputToLog:(id)a0;

@end
