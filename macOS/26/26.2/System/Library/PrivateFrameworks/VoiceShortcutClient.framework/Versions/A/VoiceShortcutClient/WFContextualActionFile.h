@class NSURL, UTType;

@interface WFContextualActionFile : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSURL *fileURL;
@property (readonly, nonatomic) UTType *type;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (void)dispose;
- (id)initWithFileURL:(id)a0 type:(id)a1;

@end
