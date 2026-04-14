@class NSString, NSDictionary;

@interface BKCatacomb : NSObject {
    NSDictionary *_writeAttributes;
}

@property (readonly, copy, nonatomic) NSString *catacombDir;

+ (id)catacombWithDir:(id)a0;

- (int)deleteAll;
- (id)content;
- (int)commitWrite;
- (id)init;
- (int)syncDir:(id)a0;
- (int)readData:(id *)a0 fromFile:(id)a1 logString:(id *)a2;
- (void).cxx_destruct;
- (id)catacombPrepareDir;
- (int)writeData:(id)a0 toFile:(id)a1;
- (int)recover;
- (int)deleteFile:(id)a0;
- (id)catacombCommitDir;
- (int)readData:(id *)a0 fromFile:(id)a1;

@end
