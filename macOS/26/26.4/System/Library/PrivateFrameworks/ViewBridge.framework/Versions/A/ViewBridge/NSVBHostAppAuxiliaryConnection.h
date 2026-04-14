@interface NSVBHostAppAuxiliaryConnection : NSVBHasClientAuxiliaryConnection {
    char _accepted;
    int _auxServicePID;
}

- (id)init;
- (void)dealloc;

@end
