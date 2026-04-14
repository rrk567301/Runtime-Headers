@class NSArray, NSMutableArray, NSURL;

@interface DIShadowChain : NSObject <NSSecureCoding, NSCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSMutableArray *shadowURLs;
@property (readonly, nonatomic) NSArray *shadowBackends;
@property (readonly, nonatomic) NSArray *shadowStats;
@property (readonly, nonatomic) NSURL *activeURL;
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, nonatomic) NSArray *mountPoints;

- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)setShadowURLs:(id)a0 error:(id *)a1;
- (id)openWritable:(BOOL)a0;
- (id)statWithError:(id *)a0;

@end
