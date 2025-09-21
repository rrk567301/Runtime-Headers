@class NSData, NSDate;

@interface HMCacheEntry : HMFObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy) NSData *data;
@property (readonly, copy) NSDate *lastModificationDate;
@property (readonly) char isExpired;

+ (id)shortDescription;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithData:(id)a0 lastModificationDate:(id)a1;

@end
