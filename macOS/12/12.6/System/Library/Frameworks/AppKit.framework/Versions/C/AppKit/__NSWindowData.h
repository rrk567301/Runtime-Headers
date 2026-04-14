@interface __NSWindowData : NSObject {
    id window;
    long long windowNum;
    struct _flags { unsigned char visible : 1; unsigned char hidesOnDeactivate : 1; unsigned char modal : 1; unsigned short _RESERVED : 13; } flags;
}

@end
