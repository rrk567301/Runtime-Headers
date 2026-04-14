@class NSFileHandle;

@interface NSPipe : NSObject

@property (readonly, retain) NSFileHandle *fileHandleForReading;
@property (readonly, retain) NSFileHandle *fileHandleForWriting;

+ (id)pipe;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (void)_closeOnDealloc;
- (id)init;

@end
