@class NSURL, UTType;

@interface WFContextualActionFile : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSURL *fileURL;
@property (readonly, nonatomic) UTType *type;

- (id)description;
- (void)dispose;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithFileURL:(id)a0 type:(id)a1;

@end
