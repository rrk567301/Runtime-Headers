@class NSString, NSDictionary;

@interface BKCatacomb : NSObject {
    NSDictionary *_writeAttributes;
}

@property (readonly, copy, nonatomic) NSString *catacombDir;

+ (id)catacombWithDir:(id)a0;

- (int)deleteAll;
- (int)readData:(id *)a0 fromFile:(id)a1;
- (id)content;
- (int)syncDir:(id)a0;
- (id)catacombCommitDir;
- (int)readData:(id *)a0 fromFile:(id)a1 logString:(id *)a2;
- (int)deleteFile:(id)a0;
- (id)catacombPrepareDir;
- (int)recover;
- (int)commitWrite;
- (void).cxx_destruct;
- (int)writeData:(id)a0 toFile:(id)a1;
- (id)init;

@end
