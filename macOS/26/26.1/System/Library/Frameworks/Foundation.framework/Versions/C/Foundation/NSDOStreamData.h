@class datap, datapVM;

@interface NSDOStreamData : NSMutableData {
    id refObject;
    struct { datap *data; char *x0; char *limitp; char *startp; datapVM *callback; BOOL x1; } stream;
}

- (const void *)bytes;
- (void *)mutableBytes;
- (void)finalize;
- (unsigned long long)length;
- (void)dealloc;
- (id)init;

@end
