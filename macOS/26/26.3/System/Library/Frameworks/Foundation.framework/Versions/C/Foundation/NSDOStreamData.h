@class datap, datapVM;

@interface NSDOStreamData : NSMutableData {
    id refObject;
    struct { datap *data; char *x0; char *limitp; char *startp; datapVM *callback; BOOL x1; } stream;
}

- (void)finalize;
- (const void *)bytes;
- (unsigned long long)length;
- (void *)mutableBytes;
- (id)init;
- (void)dealloc;

@end
