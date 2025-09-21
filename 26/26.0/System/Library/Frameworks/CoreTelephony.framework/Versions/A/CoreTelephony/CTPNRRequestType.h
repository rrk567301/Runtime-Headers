@class NSString, NSArray, NSData, NSNumber;

@interface CTPNRRequestType : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSData *pushToken;
@property (retain, nonatomic) NSString *embedded;
@property (retain, nonatomic) NSNumber *attemptCount;
@property (retain, nonatomic) NSArray *pnrReqList;
@property (retain, nonatomic) NSString *sessionToken;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqualToCTPNRRequestType:(id)a0;

@end
