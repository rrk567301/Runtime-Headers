@class DIURL, FileLocalXPC;

@interface DIShadowNode : NSObject <NSSecureCoding, NSCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) DIURL *URL;
@property (readonly, nonatomic) BOOL isCache;
@property (retain, nonatomic) FileLocalXPC *fileBackend;
@property (nonatomic) unsigned long long numBlocks;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)createBackendWithFlags:(int)a0;
- (id)initWithURL:(id)a0 isCache:(BOOL)a1;

@end
