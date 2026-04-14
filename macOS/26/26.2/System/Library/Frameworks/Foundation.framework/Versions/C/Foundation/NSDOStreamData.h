@class datap, datapVM;

@interface NSDOStreamData : NSMutableData {
    id refObject;
    struct { datap *data; char *x0; char *limitp; char *startp; datapVM *callback; BOOL x1; } stream;
}

- (void)finalize;
- (void *)mutableBytes;
- (const void *)bytes;
- (unsigned long long)length;
- (id)init;
- (void)dealloc;

@end
