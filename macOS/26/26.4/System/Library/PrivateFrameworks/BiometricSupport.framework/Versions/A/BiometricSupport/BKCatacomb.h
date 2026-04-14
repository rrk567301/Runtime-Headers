@class NSString, NSDictionary;

@interface BKCatacomb : NSObject {
    NSDictionary *_writeAttributes;
}

@property (readonly, copy, nonatomic) NSString *catacombDir;

+ (id)catacombWithDir:(id)a0;

- (id)content;
- (int)commitWrite;
- (int)syncDir:(id)a0;
- (int)writeData:(id)a0 toFile:(id)a1;
- (id)catacombCommitDir;
- (int)deleteAll;
- (void).cxx_destruct;
- (int)deleteFile:(id)a0;
- (id)init;
- (id)catacombPrepareDir;
- (int)readData:(id *)a0 fromFile:(id)a1;
- (int)recover;
- (int)readData:(id *)a0 fromFile:(id)a1 logString:(id *)a2;

@end
