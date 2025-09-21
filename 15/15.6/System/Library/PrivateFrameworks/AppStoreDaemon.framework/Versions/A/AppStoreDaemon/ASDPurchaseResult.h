@class NSError, NSNumber;

@interface ASDPurchaseResult : NSObject <NSCopying, NSSecureCoding> {
    NSNumber *_itemID;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) char success;
@property (readonly, nonatomic) NSError *error;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSuccess:(char)a0 error:(id)a1;

@end
