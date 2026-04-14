@class NSString, NSData;

@interface MSAttachment : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *contentIDWithoutScheme;
@property (copy) NSData *data;
@property (copy) NSString *filename;
@property BOOL isReferenced;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithData:(id)a0 filename:(id)a1;
- (id)initWithMCAttachment:(id)a0;

@end
