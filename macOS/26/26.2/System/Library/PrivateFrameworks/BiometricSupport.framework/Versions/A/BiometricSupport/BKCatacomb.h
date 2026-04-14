@class NSString, NSDictionary;

@interface BKCatacomb : NSObject {
    NSDictionary *_writeAttributes;
}

@property (readonly, copy, nonatomic) NSString *catacombDir;

+ (id)catacombWithDir:(id)a0;

- (int)deleteAll;
- (int)readData:(id *)a0 fromFile:(id)a1 logString:(id *)a2;
- (id)content;
- (int)commitWrite;
- (id)catacombCommitDir;
- (void).cxx_destruct;
- (int)syncDir:(id)a0;
- (id)catacombPrepareDir;
- (int)recover;
- (int)deleteFile:(id)a0;
- (int)readData:(id *)a0 fromFile:(id)a1;
- (id)init;
- (int)writeData:(id)a0 toFile:(id)a1;

@end
