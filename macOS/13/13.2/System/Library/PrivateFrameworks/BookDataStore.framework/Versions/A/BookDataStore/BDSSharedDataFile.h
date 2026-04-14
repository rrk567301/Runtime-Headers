@class NSURL;

@interface BDSSharedDataFile : NSObject

@property (readonly, nonatomic) NSURL *url;

- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (BOOL)remove:(id *)a0;
- (id)load:(id *)a0;
- (BOOL)save:(id)a0 error:(id *)a1;

@end
