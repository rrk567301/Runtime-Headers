@interface NSPersistentUISnapshotInfo : NSObject {
    unsigned int flushSeed;
    unsigned int cryptoKeyGeneration;
    unsigned int checksum;
    int fd;
}

@end
