@class NSURL;

@interface BDSSharedDataFile : NSObject

@property (readonly, nonatomic) NSURL *url;

- (BOOL)remove:(id *)a0;
- (id)load:(id *)a0;
- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (BOOL)save:(id)a0 error:(id *)a1;

@end
