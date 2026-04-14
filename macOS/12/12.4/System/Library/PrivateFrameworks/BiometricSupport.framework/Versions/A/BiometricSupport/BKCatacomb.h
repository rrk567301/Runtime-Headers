@class NSString, NSDictionary;

@interface BKCatacomb : NSObject {
    NSDictionary *_writeAttributes;
}

@property (readonly, copy, nonatomic) NSString *catacombDir;

+ (id)catacombWithDir:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)content;
- (int)deleteFile:(id)a0;
- (int)deleteAll;
- (int)recover;
- (int)writeData:(id)a0 toFile:(id)a1;
- (id)catacombCommitDir;
- (id)catacombPrepareDir;
- (int)syncDir:(id)a0;
- (int)commitWrite;
- (int)readData:(id *)a0 fromFile:(id)a1;

@end
