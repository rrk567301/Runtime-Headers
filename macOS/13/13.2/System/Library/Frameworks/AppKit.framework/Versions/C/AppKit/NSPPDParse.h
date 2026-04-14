@class NSData;

@interface NSPPDParse : NSObject {
    struct { NSData *stream; char *currentPtr; char *endPtr; } inputStreamStack[17];
    struct { id x0; char *x1; char *x2; } *input;
    id delegate;
    struct { char *data; int len; } argBuf;
    struct { char *data; int len; } keyTran;
    struct { char *data; int len; } argTran;
}

+ (id)typeToUnixName:(id)a0;
+ (id)unixToTypeName:(id)a0;
+ (id)availablePPDTypeFiles;
+ (id)findPPDFileName:(id)a0;

- (void)dealloc;
- (id)init;
- (id)run;
- (id)delegate;
- (void)setDelegate:(id)a0;
- (id)processKeyword:(char *)a0 option:(char *)a1 keyTran:(char *)a2 arg:(char *)a3 argTran:(char *)a4 quotedArg:(BOOL)a5;
- (id)growBuffer:(struct { char *x0; int x1; } *)a0 current:(char **)a1 end:(char **)a2 factor:(float)a3;
- (char)getMoreInput;
- (char)parseKey:(char)a0;
- (id)parseStream;
- (id)openInclude:(id)a0;
- (id)startInputStream:(id)a0;
- (id)endInputStream;
- (id)readFromFile:(id)a0;

@end
