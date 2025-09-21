@class NSData, NSDate;

@interface ICCertificateCacheEntry : NSObject

@property (readonly, copy, nonatomic) NSData *data;
@property (readonly, copy, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic) BOOL isExpired;

- (void).cxx_destruct;
- (id)initWithData:(id)a0 expirationDate:(id)a1;

@end
