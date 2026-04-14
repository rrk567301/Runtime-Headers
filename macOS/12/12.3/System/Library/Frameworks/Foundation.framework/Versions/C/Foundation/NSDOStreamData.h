@class datap, datapVM;

@interface NSDOStreamData : NSMutableData {
    id refObject;
    struct { datap *data; char *x0; char *limitp; char *startp; datapVM *callback; BOOL x1; } stream;
}

- (void)finalize;
- (void)dealloc;
- (id)init;
- (unsigned long long)length;
- (const void *)bytes;
- (void *)mutableBytes;

@end
