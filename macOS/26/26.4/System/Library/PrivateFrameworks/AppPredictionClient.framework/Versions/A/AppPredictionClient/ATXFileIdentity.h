@class NSData, NSURL;

@interface ATXFileIdentity : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSData *bookmarkData;
@property (readonly, copy, nonatomic) NSURL *itemURL;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithItemURL:(id)a0;
- (id)initWithItemURL:(id)a0 bookmarkData:(id)a1;
- (BOOL)isEqualToATXFileIdentity:(id)a0;
- (id)resolveItemURLWithError:(id *)a0;

@end
