@class GTTransportMessage_replayer;

@interface GTMTLReplayActivityMessage : GTMTLReplayActivity {
    GTTransportMessage_replayer *_message;
}

- (id)summary;
- (id)initWithMessage:(id)a0;
- (void).cxx_destruct;
- (id)jsonObject;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned int)messageSerial;
- (void)outputToLog:(id)a0;

@end
