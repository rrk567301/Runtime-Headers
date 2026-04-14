@interface NSPersistentUISnapshotFileHandle : NSObject {
    unsigned int checksum;
    int fd;
}

- (id)init;

@end
