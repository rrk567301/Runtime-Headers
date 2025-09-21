@class NSURL;

@interface BDSSharedDataFile : NSObject

@property (readonly, nonatomic) NSURL *url;

- (void).cxx_destruct;
- (id)initWithURL:(id)a0;
- (char)remove:(id *)a0;
- (id)load:(id *)a0;
- (char)save:(id)a0 error:(id *)a1;

@end
