@class NSData, NSURL;

@interface ATXFileIdentity : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSData *bookmarkData;
@property (readonly, copy, nonatomic) NSURL *itemURL;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithItemURL:(id)a0;
- (id)initWithItemURL:(id)a0 bookmarkData:(id)a1;
- (BOOL)isEqualToATXFileIdentity:(id)a0;
- (id)resolveItemURLWithError:(id *)a0;

@end
