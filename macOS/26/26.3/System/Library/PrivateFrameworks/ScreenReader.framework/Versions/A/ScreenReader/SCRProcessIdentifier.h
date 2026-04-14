@interface SCRProcessIdentifier : NSObject <NSCopying> {
    void /* unknown type, empty encoding */ identifier;
}

@property (nonatomic, readonly) struct ProcessSerialNumber { unsigned int x0; unsigned int x1; } psn;
@property (nonatomic, readonly) int pid;

- (id)init;
- (id)copyWithZone:(void *)a0;
- (id)initWithPSN:(struct ProcessSerialNumber { unsigned int x0; unsigned int x1; })a0;

@end
